#pragma once

#define ALARM_MIN(x)                ((x >> 0) & 0xFF)
#define ALARM_HOUR(x)               ((x >> 8) & 0xFF)
#define ALARM_DAYS(x)               ((x >> 16) & 0x7F)
#define ALARM_ON(x)                 ((x >> 23) & 0x01)

#define MODE_NORMAL                 0
#define MODE_CONTROL                1

#define MODE_NORMAL_TITLE           "NORMAL"
#define MODE_CONTROL_TITLE          "CONTROL"

#define PAGE_HOME                   0
#define PAGE_MUSIC                  1
#define PAGE_ALARMS                 2
#define PAGE_NOTIFICATIONS          3

#define PAGE_MAX                    PAGE_NOTIFICATIONS

#define PAGE_HOME_TITLE             "HOME"
#define PAGE_MUSIC_TITLE            "MUSIC"
#define PAGE_ALARMS_TITLE           "ALARMS"
#define PAGE_NOTIFICATIONS_TITLE    "NOTIFY"
