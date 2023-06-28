/*******************************************************************************
 * Copyright (c) 2023 by Karthik Jain <krthkj.public@gmail.com>
 * All Rights Reserved.
 * Using MIT+CC licence, refer the license file supplied with the project.
 *
 * Author : Karthik Jain <krthkj.public@gmail.com>
 * Date : 2023-06-28
 *******************************************************************************/
#include <gtest/gtest.h>

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int result = RUN_ALL_TESTS();
    if (result != 0) {
        // One or more test cases failed
    }
    return result;
}
