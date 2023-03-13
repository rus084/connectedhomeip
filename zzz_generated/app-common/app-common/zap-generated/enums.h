/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <stdint.h>

// ZCL enums

// Enum for BarrierControlBarrierPosition
enum EmberAfBarrierControlBarrierPosition : uint8_t
{
    EMBER_ZCL_BARRIER_CONTROL_BARRIER_POSITION_CLOSED  = 0,
    EMBER_ZCL_BARRIER_CONTROL_BARRIER_POSITION_OPEN    = 100,
    EMBER_ZCL_BARRIER_CONTROL_BARRIER_POSITION_UNKNOWN = 255,
};

// Enum for BarrierControlMovingState
enum EmberAfBarrierControlMovingState : uint8_t
{
    EMBER_ZCL_BARRIER_CONTROL_MOVING_STATE_STOPPED = 0,
    EMBER_ZCL_BARRIER_CONTROL_MOVING_STATE_CLOSING = 1,
    EMBER_ZCL_BARRIER_CONTROL_MOVING_STATE_OPENING = 2,
};

// Enum for ColorControlOptions
enum EmberAfColorControlOptions : uint8_t
{
    EMBER_ZCL_COLOR_CONTROL_OPTIONS_EXECUTE_IF_OFF = 1,
};

// Enum for ColorLoopAction
enum EmberAfColorLoopAction : uint8_t
{
    EMBER_ZCL_COLOR_LOOP_ACTION_DEACTIVATE                                  = 0,
    EMBER_ZCL_COLOR_LOOP_ACTION_ACTIVATE_FROM_COLOR_LOOP_START_ENHANCED_HUE = 1,
    EMBER_ZCL_COLOR_LOOP_ACTION_ACTIVATE_FROM_ENHANCED_CURRENT_HUE          = 2,
};

// Enum for ColorLoopDirection
enum EmberAfColorLoopDirection : uint8_t
{
    EMBER_ZCL_COLOR_LOOP_DIRECTION_DECREMENT_HUE = 0,
    EMBER_ZCL_COLOR_LOOP_DIRECTION_INCREMENT_HUE = 1,
};

// Enum for ColorMode
enum EmberAfColorMode : uint8_t
{
    EMBER_ZCL_COLOR_MODE_CURRENT_HUE_AND_CURRENT_SATURATION = 0,
    EMBER_ZCL_COLOR_MODE_CURRENT_X_AND_CURRENT_Y            = 1,
    EMBER_ZCL_COLOR_MODE_COLOR_TEMPERATURE                  = 2,
};

// Enum for EnhancedColorMode
enum EmberAfEnhancedColorMode : uint8_t
{
    EMBER_ZCL_ENHANCED_COLOR_MODE_CURRENT_HUE_AND_CURRENT_SATURATION          = 0,
    EMBER_ZCL_ENHANCED_COLOR_MODE_CURRENT_X_AND_CURRENT_Y                     = 1,
    EMBER_ZCL_ENHANCED_COLOR_MODE_COLOR_TEMPERATURE                           = 2,
    EMBER_ZCL_ENHANCED_COLOR_MODE_ENHANCED_CURRENT_HUE_AND_CURRENT_SATURATION = 3,
};

// Enum for HardwareFaultEnum
enum EmberAfHardwareFaultEnum : uint8_t
{
    EMBER_ZCL_HARDWARE_FAULT_ENUM_UNSPECIFIED               = 0,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_RADIO                     = 1,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_SENSOR                    = 2,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_RESETTABLE_OVER_TEMP      = 3,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_NON_RESETTABLE_OVER_TEMP  = 4,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_POWER_SOURCE              = 5,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_VISUAL_DISPLAY_FAULT      = 6,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_AUDIO_OUTPUT_FAULT        = 7,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_USER_INTERFACE_FAULT      = 8,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_NON_VOLATILE_MEMORY_ERROR = 9,
    EMBER_ZCL_HARDWARE_FAULT_ENUM_TAMPER_DETECTED           = 10,
};

// Enum for IdentifyEffectIdentifier
enum EmberAfIdentifyEffectIdentifier : uint8_t
{
    EMBER_ZCL_IDENTIFY_EFFECT_IDENTIFIER_BLINK          = 0,
    EMBER_ZCL_IDENTIFY_EFFECT_IDENTIFIER_BREATHE        = 1,
    EMBER_ZCL_IDENTIFY_EFFECT_IDENTIFIER_OKAY           = 2,
    EMBER_ZCL_IDENTIFY_EFFECT_IDENTIFIER_CHANNEL_CHANGE = 11,
    EMBER_ZCL_IDENTIFY_EFFECT_IDENTIFIER_FINISH_EFFECT  = 254,
    EMBER_ZCL_IDENTIFY_EFFECT_IDENTIFIER_STOP_EFFECT    = 255,
};

// Enum for IdentifyEffectVariant
enum EmberAfIdentifyEffectVariant : uint8_t
{
    EMBER_ZCL_IDENTIFY_EFFECT_VARIANT_DEFAULT = 0,
};

// Enum for IdentifyIdentifyType
enum EmberAfIdentifyIdentifyType : uint8_t
{
    EMBER_ZCL_IDENTIFY_IDENTIFY_TYPE_NONE          = 0,
    EMBER_ZCL_IDENTIFY_IDENTIFY_TYPE_VISIBLE_LIGHT = 1,
    EMBER_ZCL_IDENTIFY_IDENTIFY_TYPE_VISIBLE_LED   = 2,
    EMBER_ZCL_IDENTIFY_IDENTIFY_TYPE_AUDIBLE_BEEP  = 3,
    EMBER_ZCL_IDENTIFY_IDENTIFY_TYPE_DISPLAY       = 4,
    EMBER_ZCL_IDENTIFY_IDENTIFY_TYPE_ACTUATOR      = 5,
};

// Enum for InterfaceTypeEnum
enum EmberAfInterfaceTypeEnum : uint8_t
{
    EMBER_ZCL_INTERFACE_TYPE_ENUM_UNSPECIFIED = 0,
    EMBER_ZCL_INTERFACE_TYPE_ENUM_WI_FI       = 1,
    EMBER_ZCL_INTERFACE_TYPE_ENUM_ETHERNET    = 2,
    EMBER_ZCL_INTERFACE_TYPE_ENUM_CELLULAR    = 3,
    EMBER_ZCL_INTERFACE_TYPE_ENUM_THREAD      = 4,
};

// Enum for MoveMode
enum EmberAfMoveMode : uint8_t
{
    EMBER_ZCL_MOVE_MODE_UP   = 0,
    EMBER_ZCL_MOVE_MODE_DOWN = 1,
};

// Enum for NetworkFaultEnum
enum EmberAfNetworkFaultEnum : uint8_t
{
    EMBER_ZCL_NETWORK_FAULT_ENUM_UNSPECIFIED       = 0,
    EMBER_ZCL_NETWORK_FAULT_ENUM_HARDWARE_FAILURE  = 1,
    EMBER_ZCL_NETWORK_FAULT_ENUM_NETWORK_JAMMED    = 2,
    EMBER_ZCL_NETWORK_FAULT_ENUM_CONNECTION_FAILED = 3,
};

// Enum for PHYRateEnum
enum EmberAfPHYRateEnum : uint8_t
{
    EMBER_ZCL_PHY_RATE_ENUM_RATE10_M  = 0,
    EMBER_ZCL_PHY_RATE_ENUM_RATE100_M = 1,
    EMBER_ZCL_PHY_RATE_ENUM_RATE1_G   = 2,
    EMBER_ZCL_PHY_RATE_ENUM_RATE2_5_G = 3,
    EMBER_ZCL_PHY_RATE_ENUM_RATE5_G   = 4,
    EMBER_ZCL_PHY_RATE_ENUM_RATE10_G  = 5,
    EMBER_ZCL_PHY_RATE_ENUM_RATE40_G  = 6,
    EMBER_ZCL_PHY_RATE_ENUM_RATE100_G = 7,
    EMBER_ZCL_PHY_RATE_ENUM_RATE200_G = 8,
    EMBER_ZCL_PHY_RATE_ENUM_RATE400_G = 9,
};

// Enum for RadioFaultEnum
enum EmberAfRadioFaultEnum : uint8_t
{
    EMBER_ZCL_RADIO_FAULT_ENUM_UNSPECIFIED    = 0,
    EMBER_ZCL_RADIO_FAULT_ENUM_WI_FI_FAULT    = 1,
    EMBER_ZCL_RADIO_FAULT_ENUM_CELLULAR_FAULT = 2,
    EMBER_ZCL_RADIO_FAULT_ENUM_THREAD_FAULT   = 3,
    EMBER_ZCL_RADIO_FAULT_ENUM_NFC_FAULT      = 4,
    EMBER_ZCL_RADIO_FAULT_ENUM_BLE_FAULT      = 5,
    EMBER_ZCL_RADIO_FAULT_ENUM_ETHERNET_FAULT = 6,
};

// Enum for RoutingRole
enum EmberAfRoutingRole : uint8_t
{
    EMBER_ZCL_ROUTING_ROLE_UNSPECIFIED       = 0,
    EMBER_ZCL_ROUTING_ROLE_UNASSIGNED        = 1,
    EMBER_ZCL_ROUTING_ROLE_SLEEPY_END_DEVICE = 2,
    EMBER_ZCL_ROUTING_ROLE_END_DEVICE        = 3,
    EMBER_ZCL_ROUTING_ROLE_REED              = 4,
    EMBER_ZCL_ROUTING_ROLE_ROUTER            = 5,
    EMBER_ZCL_ROUTING_ROLE_LEADER            = 6,
};

// Enum for StepMode
enum EmberAfStepMode : uint8_t
{
    EMBER_ZCL_STEP_MODE_UP   = 0,
    EMBER_ZCL_STEP_MODE_DOWN = 1,
};

#define EMBER_AF_BARRIER_CONTROL_CAPABILITIES_PARTIAL_BARRIER (1)
#define EMBER_AF_BARRIER_CONTROL_CAPABILITIES_PARTIAL_BARRIER_OFFSET (0)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_REMOTE_LOCKOUT (1)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_REMOTE_LOCKOUT_OFFSET (0)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_TEMPER_DETECTED (2)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_TEMPER_DETECTED_OFFSET (1)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_FAILED_COMMUNICATION (4)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_FAILED_COMMUNICATION_OFFSET (2)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_POSITION_FAILURE (8)
#define EMBER_AF_BARRIER_CONTROL_SAFETY_STATUS_POSITION_FAILURE_OFFSET (3)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_ACTION (1)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_ACTION_OFFSET (0)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_DIRECTION (2)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_DIRECTION_OFFSET (1)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_TIME (4)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_TIME_OFFSET (2)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_START_HUE (8)
#define EMBER_AF_COLOR_LOOP_UPDATE_FLAGS_UPDATE_START_HUE_OFFSET (3)
