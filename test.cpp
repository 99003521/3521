#include "/home/ctea/Aman Kalaskar/githubrepo/3521/3521/calculator.h"
#include <gtest/gtest.h>

namespace{
TEST(Claculator, AddCheck){ 
    EXPECT_EQ(7,addnum(3,4));
    EXPECT_EQ(8,addnum(6,2));
    EXPECT_EQ(17,addnum(10,7));
}

TEST(Claculator, SubCheck){ 
    EXPECT_EQ(-2,subnum(3,5));
    EXPECT_EQ(4,subnum(6,2));
    EXPECT_EQ(3,subnum(10,7));
}

TEST(Claculator, MulCheck){ 
    EXPECT_EQ(15,mulnum(3,5));
    EXPECT_EQ(12,mulnum(6,2));
    EXPECT_EQ(70,mulnum(10,7));
}

TEST(Claculator, DivCheck){ 
    EXPECT_EQ(0.5,divnum(3,6));
    EXPECT_EQ(0.8,divnum(4,5));
    EXPECT_EQ(2,divnum(10,5));
}
}