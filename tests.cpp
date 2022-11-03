#include <gtest/gtest.h>
#include "priorityqueue.h"

TEST(priorityqueue, one) {
    // TO DO: write lots of assertions here.
    priorityqueue<int> pq;

    ASSERT_EQ(pq.Size(), 0);
    EXPECT_EQ(pq.Size(), 0);
}

TEST(enqueueTest, two) {
    // TO DO: write lots of assertions here.
    priorityqueue<int> pq;
    pq.enqueue(2, 1);
    ASSERT_EQ(pq.Size(), 1);
    EXPECT_EQ(pq.Size(), 1);
}

TEST(Sizetest, three)
{
    priorityqueue<int> pq;
    EXPECT_DEATH(pq.Size(), "Exited unsuccessfully");
}

// TO DO: write lots of tests here.
