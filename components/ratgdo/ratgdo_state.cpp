#include "ratgdo_state.h"

#include "esphome/core/log.h"

namespace esphome {
namespace ratgdo {

    const char* door_state_to_string(DoorState state)
    {
        switch (state) {
        case DOOR_STATE_OPEN:
            return "OPEN";
        case DOOR_STATE_CLOSED:
            return "CLOSED";
        case DOOR_STATE_STOPPED:
            return "STOPPED";
        case DOOR_STATE_OPENING:
            return "OPENING";
        case DOOR_STATE_CLOSING:
            return "CLOSING";
        case DOOR_STATE_UNKNOWN:
        default:
            return "UNKNOWN";
        }
    }

    const char* light_state_to_string(LightState state)
    {
        switch (state) {
        case LIGHT_STATE_OFF:
            return "OFF";
        case LIGHT_STATE_ON:
            return "ON";
            // 2 and 3 appears sometimes
        case LIGHT_STATE_UNKNOWN:
        default:
            return "UNKNOWN";
        }
    }

    LightState light_state_toggle(LightState state)
    {
        switch (state) {
        case LIGHT_STATE_OFF:
            return LIGHT_STATE_ON;
        case LIGHT_STATE_ON:
            return LIGHT_STATE_OFF;
            // 2 and 3 appears sometimes
        case LIGHT_STATE_UNKNOWN:
        default:
            return LIGHT_STATE_UNKNOWN;
        }
    }

    const char* lock_state_to_string(LockState state)
    {
        switch (state) {
        case LOCK_STATE_UNLOCKED:
            return "UNLOCKED";
        case LOCK_STATE_LOCKED:
            return "LOCKED";
        case LOCK_STATE_UNKNOWN:
        default:
            return "UNKNOWN";
        }
    }

    LockState lock_state_toggle(LockState state)
    {
        switch (state) {
        case LOCK_STATE_UNLOCKED:
            return LOCK_STATE_LOCKED;
        case LOCK_STATE_LOCKED:
            return LOCK_STATE_UNLOCKED;
            // 2 and 3 appears sometimes
        case LOCK_STATE_UNKNOWN:
        default:
            return LOCK_STATE_UNKNOWN;
        }
    }

    const char* motion_state_to_string(MotionState state)
    {
        switch (state) {
        case MOTION_STATE_CLEAR:
            return "CLEAR";
        case MOTION_STATE_DETECTED:
            return "DETECTED";
        case MOTION_STATE_UNKNOWN:
        default:
            return "UNKNOWN";
        }
    }

    const char* motor_state_to_string(MotorState state)
    {
        switch (state) {
        case MOTOR_STATE_ON:
            return "ON";
        case MOTOR_STATE_OFF:
            return "OFF";
        default:
            return "UNKNOWN";
        }
    }

    const char* obstruction_state_to_string(ObstructionState state)
    {
        switch (state) {
        case OBSTRUCTION_STATE_CLEAR:
            return "CLEAR";
        case OBSTRUCTION_STATE_OBSTRUCTED:
            return "OBSTRUCTED";
        case OBSTRUCTION_STATE_UNKNOWN:
        default:
            return "UNKNOWN";
        }
    }

    const char* button_state_to_string(ButtonState state)
    {
        switch (state) {
        case BUTTON_STATE_PRESSED:
            return "PRESSED";
        case BUTTON_STATE_RELEASED:
            return "RELEASED";
        case BUTTON_STATE_UNKNOWN:
        default:
            return "UNKNOWN";
        }
    }

} // namespace ratgdo
} // namespace esphome
