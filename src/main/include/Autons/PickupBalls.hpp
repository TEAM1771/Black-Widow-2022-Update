#pragma once

#include "Trajectory.hpp"
#include "Drivetrain.hpp"
#include "ShooterWheel.hpp"
#include "Hopper.hpp"
#include "Intake.hpp"

namespace Autons
{
    constexpr auto pickup_balls_auton = []()
    {
        Intake::deploy(true);
        Intake::drive(Intake::DIRECTION::IN);
        Trajectory::follow(PathPlanner::loadPath("Pickup Balls", Drivetrain::TRAJ_MAX_SPEED, Drivetrain::TRAJ_MAX_ACCELERATION),
                           [](units::second_t current_time)
                           {
            ShooterWheel::bangbang();
            Hopper::index(false); });
        Intake::deploy(false);
        Intake::drive(Intake::DIRECTION::OFF);
    };
}