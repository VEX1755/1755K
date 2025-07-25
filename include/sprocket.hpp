#pragma once

/// @brief Controls and keeps track of all sprockets in the robot.
class Sprocket {
    public:
        /// @brief Keeps track of currently selected output
        enum class OutputState {
            NONE, // No output selected
            LOWER, // Lower output
            MIDDLE, // Middle output
            HIGHER // Higher output
        };

        Sprocket();

        void set_state(OutputState state);
        void move_set_state(OutputState state);

        void move_output_motors();
        void opcontrol();
    private:
        static const int INTAKE_VOLTAGE = 127;
        static const int VOLTAGE = 90;

        OutputState state = OutputState::NONE;
};
