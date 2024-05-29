#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"

const double ULC = 1.0e-9;

TEST(Circle, CircleWithRadiusZero) {
    EXPECT_ANY_THROW(Circle(0));
}

TEST(Circle, CircleWithNormInt) {
    EXPECT_NO_THROW(Circle(12));
}

TEST(Circle, CircleWithNormDouble) {
    EXPECT_NO_THROW(Circle(133.13));
}

TEST(Circle, CircleWithNegativeInt) {
    EXPECT_ANY_THROW(Circle(-122));
}

TEST(Circle, getCorrectRadius) {
    Circle circle(1);
    EXPECT_NEAR(circle.getRadius(), 1, ULC);
}

TEST(Tasks, RopeAroundPlanet) {
    EXPECT_NEAR(TaskForPlanet(6371000.0, 1.0), M_1_PI * 0.5, ULC);
}

TEST(Tasks, PathAroundPoolTask) {
    EXPECT_NEAR(
            TaskForPoolPath(3.0, 1.0, 1000.0, 2000.0),
            23000.0 * M_PI,
            ULC);
}
