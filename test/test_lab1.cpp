#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"

#include "gtest/gtest.h"

TEST(task1, check_weight_m)
{
    ASSERT_EQ(0,getRecommendation('m',170,70));
    ASSERT_EQ(1,getRecommendation('m',160,70));
    ASSERT_EQ(-1,getRecommendation('m',190,70));
}


TEST(task1, check_weight_w)
{
    ASSERT_EQ(0,getRecommendation('w',170,60));
    ASSERT_EQ(1,getRecommendation('w',160,70));
    ASSERT_EQ(-1,getRecommendation('w',180,50));	
}


TEST(task2, check_greet_uncorrect)
{
    ASSERT_STREQ("Uncorrect time!",greet(25,30));
	
}

TEST(task2, check_greet_right)
{
    ASSERT_STREQ("Good day!",greet(12,30));
    ASSERT_STREQ("Good night!",greet(5,10));
    ASSERT_STREQ("Good evening!",greet(21,04));
}
