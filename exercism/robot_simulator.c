#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
    robot_status_t robot;
    robot.direction = direction;
    robot.position.x = x;
    robot.position.y = y;
    return robot;
}

void robot_move(robot_status_t *robot, const char *commands) {
    for (int i = 0; commands[i] != '\0'; i++) {
        if (commands[i] == 'R') {
            robot->direction = (robot->direction + 1) % DIRECTION_MAX;
        } else if (commands[i] == 'L') {
            robot->direction = (robot->direction + 3) % DIRECTION_MAX;
        } else if (commands[i] == 'A') {
            switch (robot->direction) {
                case DIRECTION_NORTH:
                    robot->position.y += 1;
                    break;
                case DIRECTION_EAST:
                    robot->position.x += 1;
                    break;
                case DIRECTION_SOUTH:
                    robot->position.y -= 1;
                    break;
                case DIRECTION_WEST:
                    robot->position.x -= 1;
                    break;
                default:
                    break;
            }
        }
    }
}