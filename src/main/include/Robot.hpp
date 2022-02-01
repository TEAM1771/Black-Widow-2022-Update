#pragma once

#include <frc/TimedRobot.h>

class Robot : public frc::TimedRobot
{
public:
    /******************************************************************/
    /*                  Public Function Declarations                  */
    /******************************************************************/

    Robot();

    void RobotInit() override;
    
    void AutonomousInit() override;
    void AutonomousPeriodic() override;

    void TeleopInit() override;
    void TeleopPeriodic() override;

    // void DisabledInit() override;
    // void DisabledPeriodic() override;

    void TestInit() override;
    void TestPeriodic() override;

private:
    /******************************************************************/
    /*                 Private Function Declarations                  */
    /******************************************************************/

    void tunePID();
    void driveWithJoystick(bool const &field_relative);
};