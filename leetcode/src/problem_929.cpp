/***********************************************************
 * 929. Unique Email Addresses
 * Every valid email consists of a local name and a domain name,
 * separated by the '@' sign. Besides lowercase letters, the email
 * may contain one or more '.' or '+'.
 *
 * For example, in "alice@leetcode.com", "alice" is the local name,
 * and "leetcode.com" is the domain name.
 *
 * If you add periods '.' between some characters in the local name
 * part of an email address, mail sent there will be forwarded to
 * the same address without dots in the local name. Note that this
 * rule does not apply to domain names.
 *
 * For example, "alice.z@leetcode.com" and "alicez@leetcode.com"
 * forward to the same email address.
 *
 * If you add a plus '+' in the local name, everything after the first
 * plus sign will be ignored. This allows certain emails to be filtered.
 * Note that this rule does not apply to domain names.
 *
 * For example, "m.y+name@email.com" will be forwarded to "my@email.com".
 *
 * It is possible to use both of these rules at the same time.
 *
 * Given an array of strings emails where we send one email to each emails[i],
 * return the number of different addresses that actually receive mails.
 *
 * Example 1:
 *  Input: emails = ["test.email+alex@leetcode.com",
 *                   "test.e.mail+bob.cathy@leetcode.com",
 *                   "testemail+david@lee.tcode.com"]
 *  Output: 2
 *  Explanation: "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails.
 *
 * Example 2:
 *  Input: emails = ["a@leetcode.com","b@leetcode.com","c@leetcode.com"]
 *  Output: 3
 *
 * Constraints:
 *  1 <= emails.length <= 100
 *  1 <= emails[i].length <= 100
 *  emails[i] consist of lowercase English letters, '+', '.' and '@'.
 *  Each emails[i] contains exactly one '@' character.
 *  All local and domain names are non-empty.
 *  Local names do not start with a '+' character.
 *  Domain names end with the ".com" suffix.
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <regex>
#include <string>
#include <unordered_map>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_929
{
std::string processEmails(std::string email);
int solution_1(std::vector<std::string>& emails); // maps and regEx: high mem and long exec time
int solution_2(std::vector<std::string>& emails); // just using map: least mem and least exec time
} // namespace problem_929

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
int numUniqueEmails(std::vector<std::string>& emails)
{
    return problem_929::solution_2(emails);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
std::string problem_929::processEmails(std::string email)
{
    std::string localName = email.substr(0, email.find('@'));
    localName = std::regex_replace(localName, std::regex("\\.+"), "");
    localName = std::regex_replace(localName, std::regex("\\+.*"), "");
    std::string domainName = email.substr(email.find('@'), email.size() - 1);
    return localName + domainName;
}

int problem_929::solution_1(std::vector<std::string>& emails)
{
    std::unordered_map<std::string, int> email_count;
    auto validEmailCounter = [&email_count](std::string email) {
        ++email_count[std::regex_replace(std::regex_replace(email.substr(0, email.find('@')), std::regex("\\.+"), ""),
                                         std::regex("\\+.*"), "") +
                      email.substr(email.find('@'), email.size() - 1)];
    };
    std::for_each(emails.begin(), emails.end(), validEmailCounter);
    return email_count.size();
}

int problem_929::solution_2(std::vector<std::string>& emails)
{
    std::unordered_map<std::string, int> email_count;
    std::for_each(emails.begin(), emails.end(), [&email_count](std::string& email) {
        std::string em{};
        for (auto c : email) {
            if (c == '.') continue;
            else if (c == '+' || c == '@') break;
            em += c;
        }
        em += email.substr(email.find('@'), email.size() - 1);
        ++email_count[em];
    });
    return email_count.size();
}

} // namespace leetcode
