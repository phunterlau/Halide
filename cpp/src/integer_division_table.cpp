/** \file 
 * Tables telling us how to do integer division
 * via fixed-point multiplication for various small
 * constants. This file is automatically generated
 * by find_inverse.c
 */
#include <stdint.h>
namespace Halide {
namespace Internal {
namespace IntegerDivision {

int64_t table_u8[][3] = {
    {0, 0, 1},
    {1, 171L, 1},
    {0, 0, 2},
    {1, 205L, 2},
    {1, 171L, 2},
    {2, 37L, 2},
    {0, 0, 3},
    {1, 57L, 1},
    {1, 205L, 3},
    {2, 117L, 3},
    {1, 171L, 3},
    {1, 79L, 2},
    {2, 37L, 3},
    {1, 137L, 3},
    {0, 0, 4},
    {1, 241L, 4},
    {1, 57L, 2},
    {1, 27L, 1},
    {1, 205L, 4},
    {2, 135L, 4},
    {2, 117L, 4},
    {2, 101L, 4},
    {1, 171L, 4},
    {1, 41L, 2},
    {1, 79L, 3},
    {1, 19L, 1},
    {2, 37L, 4},
    {2, 27L, 4},
    {1, 137L, 4},
    {2, 9L, 4},
    {0, 0, 5},
    {1, 249L, 5},
    {1, 241L, 5},
    {1, 235L, 5},
    {1, 57L, 3},
    {1, 111L, 4},
    {1, 27L, 2},
    {2, 165L, 5},
    {1, 205L, 5},
    {1, 25L, 2},
    {2, 135L, 5},
    {1, 191L, 5},
    {1, 187L, 5},
    {2, 109L, 5},
    {2, 101L, 5},
    {1, 175L, 5},
    {1, 171L, 5},
    {2, 79L, 5},
    {1, 41L, 3},
    {1, 161L, 5},
    {1, 79L, 4},
    {1, 155L, 5},
    {1, 19L, 2},
    {1, 149L, 5},
    {2, 37L, 5},
    {1, 9L, 1},
    {2, 27L, 5},
    {1, 139L, 5},
    {1, 137L, 5},
    {2, 13L, 5},
    {2, 9L, 5},
    {2, 5L, 5},
    {0, 0, 6},
    {1, 253L, 6},
    {1, 249L, 6},
    {1, 245L, 6},
    {1, 121L, 5},
    {1, 119L, 5},
    {1, 235L, 6},
    {1, 231L, 6},
    {1, 57L, 4},
    {1, 225L, 6},
    {1, 111L, 5},
    {1, 219L, 6},
    {1, 27L, 3},
    {1, 213L, 6},
    {2, 165L, 6},
    {1, 13L, 2},
    {1, 205L, 6},
    {1, 203L, 6},
    {1, 25L, 3},
    {1, 99L, 5},
    {2, 135L, 6},
    {1, 193L, 6},
    {1, 191L, 6},
    {1, 189L, 6},
    {1, 187L, 6},
    {1, 185L, 6},
    {1, 183L, 6},
    {1, 181L, 6},
    {1, 179L, 6},
    {1, 177L, 6},
    {1, 175L, 6},
    {1, 173L, 6},
    {1, 171L, 6},
    {1, 169L, 6},
    {1, 21L, 3},
    {1, 83L, 5},
    {1, 41L, 4},
    {1, 163L, 6},
    {1, 161L, 6},
    {2, 63L, 6},
    {1, 79L, 5},
    {2, 57L, 6},
    {1, 155L, 6},
    {2, 51L, 6},
    {1, 19L, 3},
    {1, 151L, 6},
    {1, 149L, 6},
    {1, 37L, 4},
    {2, 37L, 6},
    {1, 145L, 6},
    {1, 9L, 2},
    {1, 143L, 6},
    {2, 27L, 6},
    {2, 25L, 6},
    {1, 139L, 6},
    {1, 69L, 5},
    {1, 137L, 6},
    {2, 15L, 6},
    {2, 13L, 6},
    {2, 11L, 6},
    {2, 9L, 6},
    {2, 7L, 6},
    {2, 5L, 6},
    {2, 3L, 6},
    {0, 0, 7},
    {1, 255L, 7},
    {1, 127L, 6},
    {1, 63L, 5},
    {1, 125L, 6},
    {1, 31L, 4},
    {1, 123L, 6},
    {1, 61L, 5},
    {1, 121L, 6},
    {1, 15L, 3},
    {1, 119L, 6},
    {1, 59L, 5},
    {1, 235L, 7},
    {1, 117L, 6},
    {1, 29L, 4},
    {1, 115L, 6},
    {1, 57L, 5},
    {1, 113L, 6},
    {1, 225L, 7},
    {1, 7L, 2},
    {1, 111L, 6},
    {1, 55L, 5},
    {1, 219L, 7},
    {1, 109L, 6},
    {1, 27L, 4},
    {1, 215L, 7},
    {1, 107L, 6},
    {1, 53L, 5},
    {1, 211L, 7},
    {1, 105L, 6},
    {1, 13L, 3},
    {1, 207L, 7},
    {1, 103L, 6},
    {1, 51L, 5},
    {1, 203L, 7},
    {1, 101L, 6},
    {1, 25L, 4},
    {1, 199L, 7},
    {1, 99L, 6},
    {1, 197L, 7},
    {1, 49L, 5},
    {1, 97L, 6},
    {1, 193L, 7},
    {1, 3L, 1},
    {1, 191L, 7},
    {1, 95L, 6},
    {1, 189L, 7},
    {1, 47L, 5},
    {1, 187L, 7},
    {1, 93L, 6},
    {1, 185L, 7},
    {1, 23L, 4},
    {1, 183L, 7},
    {1, 91L, 6},
    {1, 181L, 7},
    {1, 45L, 5},
    {1, 179L, 7},
    {1, 89L, 6},
    {1, 177L, 7},
    {1, 11L, 3},
    {1, 175L, 7},
    {1, 87L, 6},
    {1, 173L, 7},
    {1, 43L, 5},
    {1, 171L, 7},
    {1, 85L, 6},
    {1, 169L, 7},
    {2, 81L, 7},
    {1, 21L, 4},
    {1, 167L, 7},
    {1, 83L, 6},
    {1, 165L, 7},
    {1, 41L, 5},
    {2, 71L, 7},
    {1, 163L, 7},
    {1, 81L, 6},
    {1, 161L, 7},
    {1, 5L, 2},
    {2, 63L, 7},
    {1, 159L, 7},
    {1, 79L, 6},
    {1, 157L, 7},
    {2, 57L, 7},
    {1, 39L, 5},
    {1, 155L, 7},
    {1, 77L, 6},
    {2, 51L, 7},
    {1, 153L, 7},
    {1, 19L, 4},
    {2, 47L, 7},
    {1, 151L, 7},
    {1, 75L, 6},
    {1, 149L, 7},
    {2, 41L, 7},
    {1, 37L, 5},
    {1, 147L, 7},
    {2, 37L, 7},
    {1, 73L, 6},
    {1, 145L, 7},
    {2, 33L, 7},
    {1, 9L, 3},
    {2, 31L, 7},
    {1, 143L, 7},
    {1, 71L, 6},
    {2, 27L, 7},
    {1, 141L, 7},
    {2, 25L, 7},
    {1, 35L, 5},
    {1, 139L, 7},
    {2, 21L, 7},
    {1, 69L, 6},
    {2, 19L, 7},
    {1, 137L, 7},
    {1, 17L, 4},
    {2, 15L, 7},
    {1, 135L, 7},
    {2, 13L, 7},
    {1, 67L, 6},
    {2, 11L, 7},
    {1, 133L, 7},
    {2, 9L, 7},
    {1, 33L, 5},
    {2, 7L, 7},
    {1, 131L, 7},
    {2, 5L, 7},
    {1, 65L, 6},
    {2, 3L, 7},
    {1, 129L, 7},
    {0, 0, 8},
};
int64_t table_s8[][3] = {
    {0, 0, 1},
    {1, 86L, 0},
    {0, 0, 2},
    {1, 103L, 1},
    {1, 43L, 0},
    {1, 147L, 2},
    {0, 0, 3},
    {1, 57L, 1},
    {1, 103L, 2},
    {1, 187L, 3},
    {1, 43L, 1},
    {1, 79L, 2},
    {1, 147L, 3},
    {1, 137L, 3},
    {0, 0, 4},
    {1, 121L, 3},
    {1, 57L, 2},
    {1, 27L, 1},
    {1, 103L, 3},
    {1, 49L, 2},
    {1, 187L, 4},
    {1, 179L, 4},
    {1, 43L, 2},
    {1, 41L, 2},
    {1, 79L, 3},
    {1, 19L, 1},
    {1, 147L, 4},
    {1, 71L, 3},
    {1, 137L, 4},
    {1, 133L, 4},
    {0, 0, 5},
    {1, 125L, 4},
    {1, 121L, 4},
    {1, 59L, 3},
    {1, 57L, 3},
    {1, 111L, 4},
    {1, 27L, 2},
    {1, 211L, 5},
    {1, 103L, 4},
    {1, 25L, 2},
    {1, 49L, 3},
    {1, 6L, 0},
    {1, 47L, 3},
    {1, 23L, 2},
    {1, 45L, 3},
    {1, 11L, 1},
    {1, 43L, 3},
    {1, 21L, 2},
    {1, 41L, 3},
    {1, 81L, 4},
    {1, 79L, 4},
    {1, 39L, 3},
    {1, 19L, 2},
    {1, 75L, 4},
    {1, 147L, 5},
    {1, 9L, 1},
    {1, 71L, 4},
    {1, 35L, 3},
    {1, 137L, 5},
    {1, 135L, 5},
    {1, 133L, 5},
    {1, 131L, 5},
    {0, 0, 6},
    {1, 127L, 5},
    {1, 63L, 4},
    {1, 31L, 3},
    {1, 61L, 4},
    {1, 15L, 2},
    {1, 59L, 4},
    {1, 29L, 3},
    {1, 57L, 4},
    {1, 113L, 5},
    {1, 7L, 1},
    {1, 55L, 4},
    {1, 27L, 3},
    {1, 107L, 5},
    {1, 53L, 4},
    {1, 13L, 2},
    {1, 103L, 5},
    {1, 51L, 4},
    {1, 25L, 3},
    {1, 99L, 5},
    {1, 49L, 4},
    {1, 97L, 5},
    {1, 3L, 0},
    {1, 95L, 5},
    {1, 47L, 4},
    {1, 93L, 5},
    {1, 23L, 3},
    {1, 91L, 5},
    {1, 45L, 4},
    {1, 89L, 5},
    {1, 11L, 2},
    {1, 87L, 5},
    {1, 43L, 4},
    {1, 85L, 5},
    {1, 21L, 3},
    {1, 83L, 5},
    {1, 41L, 4},
    {1, 163L, 6},
    {1, 81L, 5},
    {1, 5L, 1},
    {1, 79L, 5},
    {1, 157L, 6},
    {1, 39L, 4},
    {1, 77L, 5},
    {1, 19L, 3},
    {1, 151L, 6},
    {1, 75L, 5},
    {1, 37L, 4},
    {1, 147L, 6},
    {1, 73L, 5},
    {1, 9L, 2},
    {1, 143L, 6},
    {1, 71L, 5},
    {1, 141L, 6},
    {1, 35L, 4},
    {1, 69L, 5},
    {1, 137L, 6},
    {1, 17L, 3},
    {1, 135L, 6},
    {1, 67L, 5},
    {1, 133L, 6},
    {1, 33L, 4},
    {1, 131L, 6},
    {1, 65L, 5},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
    {0, 0, 7},
};
int64_t table_u16[][3] = {
    {0, 0, 1},
    {1, 43691L, 1},
    {0, 0, 2},
    {1, 52429L, 2},
    {1, 43691L, 2},
    {2, 9363L, 2},
    {0, 0, 3},
    {1, 58255L, 3},
    {1, 52429L, 3},
    {1, 47663L, 3},
    {1, 43691L, 3},
    {1, 20165L, 2},
    {2, 9363L, 3},
    {1, 34953L, 3},
    {0, 0, 4},
    {1, 61681L, 4},
    {1, 58255L, 4},
    {1, 55189L, 4},
    {1, 52429L, 4},
    {2, 34329L, 4},
    {1, 47663L, 4},
    {2, 25645L, 4},
    {1, 43691L, 4},
    {2, 18351L, 4},
    {1, 20165L, 3},
    {2, 12137L, 4},
    {2, 9363L, 4},
    {1, 18079L, 3},
    {1, 34953L, 4},
    {2, 2115L, 4},
    {0, 0, 5},
    {1, 63551L, 5},
    {1, 61681L, 5},
    {1, 59919L, 5},
    {1, 58255L, 5},
    {1, 7085L, 2},
    {1, 55189L, 5},
    {2, 42011L, 5},
    {1, 52429L, 5},
    {2, 36765L, 5},
    {2, 34329L, 5},
    {1, 48771L, 5},
    {1, 47663L, 5},
    {1, 11651L, 3},
    {2, 25645L, 5},
    {2, 23705L, 5},
    {1, 43691L, 5},
    {2, 20063L, 5},
    {2, 18351L, 5},
    {1, 41121L, 5},
    {1, 20165L, 4},
    {1, 39569L, 5},
    {2, 12137L, 5},
    {2, 10725L, 5},
    {2, 9363L, 5},
    {2, 8049L, 5},
    {1, 18079L, 4},
    {1, 35545L, 5},
    {1, 34953L, 5},
    {1, 8595L, 3},
    {2, 2115L, 5},
    {2, 1041L, 5},
    {0, 0, 6},
    {1, 4033L, 2},
    {1, 63551L, 6},
    {1, 31301L, 5},
    {1, 61681L, 6},
    {2, 56039L, 6},
    {1, 59919L, 6},
    {1, 59075L, 6},
    {1, 58255L, 6},
    {1, 57457L, 6},
    {1, 7085L, 3},
    {2, 46313L, 6},
    {1, 55189L, 6},
    {1, 6809L, 3},
    {2, 42011L, 6},
    {1, 53093L, 6},
    {1, 52429L, 6},
    {1, 25891L, 5},
    {2, 36765L, 6},
    {1, 25267L, 5},
    {2, 34329L, 6},
    {1, 49345L, 6},
    {1, 48771L, 6},
    {1, 48211L, 6},
    {1, 47663L, 6},
    {2, 28719L, 6},
    {1, 11651L, 4},
    {2, 26647L, 6},
    {2, 25645L, 6},
    {2, 24665L, 6},
    {2, 23705L, 6},
    {1, 44151L, 6},
    {1, 43691L, 6},
    {2, 20945L, 6},
    {2, 20063L, 6},
    {1, 42367L, 6},
    {2, 18351L, 6},
    {1, 5191L, 3},
    {1, 41121L, 6},
    {1, 20361L, 5},
    {1, 20165L, 5},
    {1, 19973L, 5},
    {1, 39569L, 6},
    {2, 12863L, 6},
    {2, 12137L, 6},
    {1, 2405L, 2},
    {2, 10725L, 6},
    {1, 37787L, 6},
    {2, 9363L, 6},
    {1, 18559L, 5},
    {2, 8049L, 6},
    {2, 7409L, 6},
    {1, 18079L, 5},
    {1, 35849L, 6},
    {1, 35545L, 6},
    {2, 4957L, 6},
    {1, 34953L, 6},
    {1, 4333L, 3},
    {1, 8595L, 4},
    {2, 2665L, 6},
    {2, 2115L, 6},
    {2, 1573L, 6},
    {2, 1041L, 6},
    {2, 517L, 6},
    {0, 0, 7},
    {1, 16257L, 5},
    {1, 4033L, 3},
    {1, 16009L, 5},
    {1, 63551L, 7},
    {1, 63073L, 7},
    {1, 31301L, 6},
    {1, 31069L, 6},
    {1, 61681L, 7},
    {1, 61231L, 7},
    {2, 56039L, 7},
    {1, 30175L, 6},
    {1, 59919L, 7},
    {1, 29747L, 6},
    {1, 59075L, 7},
    {1, 29331L, 6},
    {1, 58255L, 7},
    {1, 57853L, 7},
    {1, 57457L, 7},
    {1, 28533L, 6},
    {1, 7085L, 4},
    {1, 14075L, 5},
    {2, 46313L, 7},
    {1, 27777L, 6},
    {1, 55189L, 7},
    {1, 13707L, 5},
    {1, 6809L, 4},
    {2, 42705L, 7},
    {2, 42011L, 7},
    {1, 53431L, 7},
    {1, 53093L, 7},
    {1, 52759L, 7},
    {1, 52429L, 7},
    {2, 38671L, 7},
    {1, 25891L, 6},
    {1, 6433L, 4},
    {2, 36765L, 7},
    {2, 36145L, 7},
    {1, 25267L, 6},
    {2, 34927L, 7},
    {2, 34329L, 7},
    {1, 49637L, 7},
    {1, 49345L, 7},
    {2, 32577L, 7},
    {1, 48771L, 7},
    {2, 31443L, 7},
    {1, 48211L, 7},
    {1, 47935L, 7},
    {1, 47663L, 7},
    {2, 29251L, 7},
    {2, 28719L, 7},
    {1, 2929L, 3},
    {1, 11651L, 5},
    {1, 23173L, 6},
    {2, 26647L, 7},
    {1, 2865L, 3},
    {2, 25645L, 7},
    {1, 1417L, 2},
    {2, 24665L, 7},
    {1, 44859L, 7},
    {2, 23705L, 7},
    {2, 23233L, 7},
    {1, 44151L, 7},
    {1, 2745L, 3},
    {1, 43691L, 7},
    {2, 21393L, 7},
    {2, 20945L, 7},
    {1, 43019L, 7},
    {2, 20063L, 7},
    {1, 21291L, 6},
    {1, 42367L, 7},
    {1, 21077L, 6},
    {2, 18351L, 7},
    {1, 41735L, 7},
    {1, 5191L, 4},
    {2, 17111L, 7},
    {1, 41121L, 7},
    {2, 16305L, 7},
    {1, 20361L, 6},
    {1, 40525L, 7},
    {1, 20165L, 6},
    {1, 40137L, 7},
    {1, 19973L, 6},
    {1, 39757L, 7},
    {1, 39569L, 7},
    {2, 13231L, 7},
    {2, 12863L, 7},
    {1, 39017L, 7},
    {2, 12137L, 7},
    {2, 11779L, 7},
    {1, 2405L, 3},
    {2, 11073L, 7},
    {2, 10725L, 7},
    {1, 18979L, 6},
    {1, 37787L, 7},
    {2, 9699L, 7},
    {2, 9363L, 7},
    {1, 37283L, 7},
    {1, 18559L, 6},
    {2, 8373L, 7},
    {2, 8049L, 7},
    {1, 4579L, 4},
    {2, 7409L, 7},
    {2, 7093L, 7},
    {1, 18079L, 6},
    {1, 36003L, 7},
    {1, 35849L, 7},
    {2, 5857L, 7},
    {1, 35545L, 7},
    {1, 35395L, 7},
    {2, 4957L, 7},
    {1, 35099L, 7},
    {1, 34953L, 7},
    {1, 4351L, 4},
    {1, 4333L, 4},
    {2, 3507L, 7},
    {1, 8595L, 5},
    {2, 2943L, 7},
    {2, 2665L, 7},
    {1, 16981L, 6},
    {2, 2115L, 7},
    {2, 1843L, 7},
    {2, 1573L, 7},
    {1, 33421L, 7},
    {2, 1041L, 7},
    {1, 33157L, 7},
    {2, 517L, 7},
    {1, 32897L, 7},
    {0, 0, 8},
};
int64_t table_s16[][3] = {
    {0, 0, 1},
    {1, 21846L, 0},
    {0, 0, 2},
    {1, 26215L, 1},
    {1, 10923L, 0},
    {1, 18725L, 1},
    {0, 0, 3},
    {1, 7282L, 0},
    {1, 26215L, 2},
    {1, 5958L, 0},
    {1, 10923L, 1},
    {1, 20165L, 2},
    {1, 18725L, 2},
    {1, 34953L, 3},
    {0, 0, 4},
    {1, 30841L, 3},
    {1, 3641L, 0},
    {1, 55189L, 4},
    {1, 26215L, 3},
    {1, 49933L, 4},
    {1, 2979L, 0},
    {1, 45591L, 4},
    {1, 10923L, 2},
    {1, 5243L, 1},
    {1, 20165L, 3},
    {1, 38837L, 4},
    {1, 18725L, 3},
    {1, 18079L, 3},
    {1, 34953L, 4},
    {1, 16913L, 3},
    {0, 0, 5},
    {1, 1986L, 0},
    {1, 30841L, 4},
    {1, 3745L, 1},
    {1, 3641L, 1},
    {1, 7085L, 2},
    {1, 55189L, 5},
    {1, 26887L, 4},
    {1, 26215L, 4},
    {1, 51151L, 5},
    {1, 49933L, 5},
    {1, 12193L, 3},
    {1, 2979L, 1},
    {1, 11651L, 3},
    {1, 45591L, 5},
    {1, 44621L, 5},
    {1, 10923L, 3},
    {1, 2675L, 1},
    {1, 5243L, 2},
    {1, 41121L, 5},
    {1, 20165L, 4},
    {1, 19785L, 4},
    {1, 38837L, 5},
    {1, 38131L, 5},
    {1, 18725L, 4},
    {1, 36793L, 5},
    {1, 18079L, 4},
    {1, 17773L, 4},
    {1, 34953L, 5},
    {1, 8595L, 3},
    {1, 16913L, 4},
    {1, 33289L, 5},
    {0, 0, 6},
    {1, 4033L, 2},
    {1, 993L, 0},
    {1, 31301L, 5},
    {1, 30841L, 5},
    {1, 15197L, 4},
    {1, 3745L, 2},
    {1, 14769L, 4},
    {1, 3641L, 2},
    {1, 57457L, 6},
    {1, 7085L, 3},
    {1, 55925L, 6},
    {1, 55189L, 6},
    {1, 6809L, 3},
    {1, 26887L, 5},
    {1, 26547L, 5},
    {1, 26215L, 5},
    {1, 25891L, 5},
    {1, 51151L, 6},
    {1, 25267L, 5},
    {1, 49933L, 6},
    {1, 24673L, 5},
    {1, 12193L, 4},
    {1, 48211L, 6},
    {1, 2979L, 2},
    {1, 5891L, 3},
    {1, 11651L, 4},
    {1, 11523L, 4},
    {1, 45591L, 6},
    {1, 45101L, 6},
    {1, 44621L, 6},
    {1, 44151L, 6},
    {1, 10923L, 4},
    {1, 43241L, 6},
    {1, 2675L, 2},
    {1, 662L, 0},
    {1, 5243L, 3},
    {1, 5191L, 3},
    {1, 41121L, 6},
    {1, 20361L, 5},
    {1, 20165L, 5},
    {1, 19973L, 5},
    {1, 19785L, 5},
    {1, 1225L, 1},
    {1, 38837L, 6},
    {1, 2405L, 2},
    {1, 38131L, 6},
    {1, 37787L, 6},
    {1, 18725L, 5},
    {1, 18559L, 5},
    {1, 36793L, 6},
    {1, 36473L, 6},
    {1, 18079L, 5},
    {1, 35849L, 6},
    {1, 17773L, 5},
    {1, 35247L, 6},
    {1, 34953L, 6},
    {1, 4333L, 3},
    {1, 8595L, 4},
    {1, 34101L, 6},
    {1, 16913L, 5},
    {1, 33555L, 6},
    {1, 33289L, 6},
    {1, 33027L, 6},
    {0, 0, 7},
    {1, 16257L, 5},
    {1, 4033L, 3},
    {1, 16009L, 5},
    {1, 993L, 1},
    {1, 31537L, 6},
    {1, 31301L, 6},
    {1, 31069L, 6},
    {1, 30841L, 6},
    {1, 3827L, 3},
    {1, 15197L, 5},
    {1, 30175L, 6},
    {1, 3745L, 3},
    {1, 29747L, 6},
    {1, 14769L, 5},
    {1, 29331L, 6},
    {1, 3641L, 3},
    {1, 28927L, 6},
    {1, 57457L, 7},
    {1, 28533L, 6},
    {1, 7085L, 4},
    {1, 14075L, 5},
    {1, 55925L, 7},
    {1, 27777L, 6},
    {1, 55189L, 7},
    {1, 13707L, 5},
    {1, 6809L, 4},
    {1, 54121L, 7},
    {1, 26887L, 6},
    {1, 6679L, 4},
    {1, 26547L, 6},
    {1, 6595L, 4},
    {1, 26215L, 6},
    {1, 6513L, 4},
    {1, 25891L, 6},
    {1, 6433L, 4},
    {1, 51151L, 7},
    {1, 50841L, 7},
    {1, 25267L, 6},
    {1, 6279L, 4},
    {1, 49933L, 7},
    {1, 24819L, 6},
    {1, 24673L, 6},
    {1, 49057L, 7},
    {1, 12193L, 5},
    {1, 24245L, 6},
    {1, 48211L, 7},
    {1, 749L, 1},
    {1, 2979L, 3},
    {1, 23697L, 6},
    {1, 5891L, 4},
    {1, 2929L, 3},
    {1, 11651L, 5},
    {1, 23173L, 6},
    {1, 11523L, 5},
    {1, 2865L, 3},
    {1, 45591L, 7},
    {1, 1417L, 2},
    {1, 45101L, 7},
    {1, 11215L, 5},
    {1, 44621L, 7},
    {1, 44385L, 7},
    {1, 44151L, 7},
    {1, 2745L, 3},
    {1, 10923L, 5},
    {1, 43465L, 7},
    {1, 43241L, 7},
    {1, 43019L, 7},
    {1, 2675L, 3},
    {1, 21291L, 6},
    {1, 331L, 0},
    {1, 21077L, 6},
    {1, 5243L, 4},
    {1, 41735L, 7},
    {1, 5191L, 4},
    {1, 10331L, 5},
    {1, 41121L, 7},
    {1, 40921L, 7},
    {1, 20361L, 6},
    {1, 40525L, 7},
    {1, 20165L, 6},
    {1, 20069L, 6},
    {1, 19973L, 6},
    {1, 39757L, 7},
    {1, 19785L, 6},
    {1, 4923L, 4},
    {1, 1225L, 2},
    {1, 39017L, 7},
    {1, 38837L, 7},
    {1, 19329L, 6},
    {1, 2405L, 3},
    {1, 38305L, 7},
    {1, 38131L, 7},
    {1, 18979L, 6},
    {1, 37787L, 7},
    {1, 18809L, 6},
    {1, 18725L, 6},
    {1, 37283L, 7},
    {1, 18559L, 6},
    {1, 36955L, 7},
    {1, 36793L, 7},
    {1, 4579L, 4},
    {1, 36473L, 7},
    {1, 36315L, 7},
    {1, 18079L, 6},
    {1, 36003L, 7},
    {1, 35849L, 7},
    {1, 35697L, 7},
    {1, 17773L, 6},
    {1, 8849L, 5},
    {1, 35247L, 7},
    {1, 35099L, 7},
    {1, 34953L, 7},
    {1, 4351L, 4},
    {1, 4333L, 4},
    {1, 17261L, 6},
    {1, 8595L, 5},
    {1, 535L, 1},
    {1, 34101L, 7},
    {1, 16981L, 6},
    {1, 16913L, 6},
    {1, 16845L, 6},
    {1, 33555L, 7},
    {1, 33421L, 7},
    {1, 33289L, 7},
    {1, 33157L, 7},
    {1, 33027L, 7},
    {1, 32897L, 7},
    {1, 32769L, 7},
};
int64_t table_u32[][3] = {
    {0, 0, 1},
    {1, 2863311531L, 1},
    {0, 0, 2},
    {1, 3435973837L, 2},
    {1, 2863311531L, 2},
    {2, 613566757L, 2},
    {0, 0, 3},
    {1, 954437177L, 1},
    {1, 3435973837L, 3},
    {1, 3123612579L, 3},
    {1, 2863311531L, 3},
    {1, 1321528399L, 2},
    {2, 613566757L, 3},
    {1, 2290649225L, 3},
    {0, 0, 4},
    {1, 4042322161L, 4},
    {1, 954437177L, 2},
    {2, 2938661835L, 4},
    {1, 3435973837L, 4},
    {2, 2249744775L, 4},
    {1, 3123612579L, 4},
    {1, 2987803337L, 4},
    {1, 2863311531L, 4},
    {1, 1374389535L, 3},
    {1, 1321528399L, 3},
    {2, 795364315L, 4},
    {2, 613566757L, 4},
    {1, 2369637129L, 4},
    {1, 2290649225L, 4},
    {2, 138547333L, 4},
    {0, 0, 5},
    {1, 1041204193L, 3},
    {1, 4042322161L, 5},
    {2, 3558687189L, 5},
    {1, 954437177L, 3},
    {2, 3134165325L, 5},
    {2, 2938661835L, 5},
    {2, 2753184165L, 5},
    {1, 3435973837L, 5},
    {1, 3352169597L, 5},
    {2, 2249744775L, 5},
    {1, 799063683L, 3},
    {1, 3123612579L, 5},
    {2, 1813430637L, 5},
    {1, 2987803337L, 5},
    {1, 2924233053L, 5},
    {1, 2863311531L, 5},
    {1, 1402438301L, 4},
    {1, 1374389535L, 4},
    {1, 2694881441L, 5},
    {1, 1321528399L, 4},
    {2, 891408307L, 5},
    {2, 795364315L, 5},
    {2, 702812831L, 5},
    {2, 613566757L, 5},
    {2, 527452125L, 5},
    {1, 2369637129L, 5},
    {1, 582368447L, 3},
    {1, 2290649225L, 5},
    {1, 1126548799L, 4},
    {2, 138547333L, 5},
    {2, 68174085L, 5},
    {0, 0, 6},
    {1, 4228890877L, 6},
    {1, 1041204193L, 4},
    {1, 128207979L, 1},
    {1, 4042322161L, 6},
    {1, 1991868891L, 5},
    {2, 3558687189L, 6},
    {1, 3871519817L, 6},
    {1, 954437177L, 4},
    {2, 3235934265L, 6},
    {2, 3134165325L, 6},
    {1, 458129845L, 3},
    {2, 2938661835L, 6},
    {1, 892460737L, 4},
    {2, 2753184165L, 6},
    {1, 3479467177L, 6},
    {1, 3435973837L, 6},
    {1, 3393554407L, 6},
    {1, 3352169597L, 6},
    {1, 827945503L, 4},
    {2, 2249744775L, 6},
    {1, 3233857729L, 6},
    {1, 799063683L, 4},
    {1, 789879043L, 4},
    {1, 3123612579L, 6},
    {1, 3088515809L, 6},
    {2, 1813430637L, 6},
    {2, 1746305385L, 6},
    {1, 2987803337L, 6},
    {1, 2955676419L, 6},
    {1, 2924233053L, 6},
    {2, 1491936009L, 6},
    {1, 2863311531L, 6},
    {2, 1372618415L, 6},
    {1, 1402438301L, 5},
    {1, 2776544515L, 6},
    {1, 1374389535L, 5},
    {2, 1148159575L, 6},
    {1, 2694881441L, 6},
    {2, 1042467791L, 6},
    {1, 1321528399L, 5},
    {2, 940802361L, 6},
    {2, 891408307L, 6},
    {2, 842937507L, 6},
    {2, 795364315L, 6},
    {2, 748664025L, 6},
    {2, 702812831L, 6},
    {2, 657787785L, 6},
    {2, 613566757L, 6},
    {2, 570128403L, 6},
    {2, 527452125L, 6},
    {2, 485518043L, 6},
    {1, 2369637129L, 6},
    {2, 403800345L, 6},
    {1, 582368447L, 4},
    {1, 1154949189L, 5},
    {1, 2290649225L, 6},
    {2, 248469183L, 6},
    {1, 1126548799L, 5},
    {2, 174592167L, 6},
    {2, 138547333L, 6},
    {1, 274877907L, 3},
    {2, 68174085L, 6},
    {2, 33818641L, 6},
    {0, 0, 7},
    {1, 266354561L, 3},
    {1, 4228890877L, 7},
    {1, 4196609267L, 7},
    {1, 1041204193L, 5},
    {1, 4133502361L, 7},
    {1, 128207979L, 2},
    {1, 4072265289L, 7},
    {1, 4042322161L, 7},
    {1, 125400505L, 2},
    {1, 1991868891L, 6},
    {1, 1977538899L, 6},
    {2, 3558687189L, 7},
    {1, 974744351L, 5},
    {1, 3871519817L, 7},
    {1, 3844446251L, 7},
    {1, 954437177L, 5},
    {1, 3791419407L, 7},
    {2, 3235934265L, 7},
    {1, 3739835469L, 7},
    {2, 3134165325L, 7},
    {1, 3689636335L, 7},
    {1, 458129845L, 4},
    {1, 910191745L, 5},
    {2, 2938661835L, 7},
    {1, 3593175255L, 7},
    {1, 892460737L, 5},
    {1, 3546811703L, 7},
    {2, 2753184165L, 7},
    {1, 875407347L, 5},
    {1, 3479467177L, 7},
    {2, 2620200175L, 7},
    {1, 3435973837L, 7},
    {1, 3414632385L, 7},
    {1, 3393554407L, 7},
    {1, 3372735055L, 7},
    {1, 3352169597L, 7},
    {1, 1665926709L, 6},
    {1, 827945503L, 5},
    {1, 1645975491L, 6},
    {2, 2249744775L, 7},
    {1, 1626496491L, 6},
    {1, 3233857729L, 7},
    {2, 2134925265L, 7},
    {1, 799063683L, 5},
    {2, 2060591247L, 7},
    {1, 789879043L, 5},
    {1, 1570730897L, 6},
    {1, 3123612579L, 7},
    {2, 1916962805L, 7},
    {1, 3088515809L, 7},
    {2, 1847555765L, 7},
    {2, 1813430637L, 7},
    {1, 3037324939L, 7},
    {2, 1746305385L, 7},
    {1, 3004130131L, 7},
    {1, 2987803337L, 7},
    {2, 1648338801L, 7},
    {1, 2955676419L, 7},
    {1, 2939870663L, 7},
    {1, 2924233053L, 7},
    {2, 1522554545L, 7},
    {2, 1491936009L, 7},
    {1, 2878302691L, 7},
    {1, 2863311531L, 7},
    {1, 356059465L, 4},
    {2, 1372618415L, 7},
    {2, 1343553873L, 7},
    {1, 1402438301L, 6},
    {2, 1286310003L, 7},
    {1, 2776544515L, 7},
    {1, 1381296015L, 6},
    {1, 1374389535L, 6},
    {1, 42735993L, 1},
    {2, 1148159575L, 7},
    {1, 2708156719L, 7},
    {1, 2694881441L, 7},
    {1, 1340867839L, 6},
    {2, 1042467791L, 7},
    {1, 663956297L, 5},
    {1, 1321528399L, 6},
    {1, 2630410593L, 7},
    {2, 940802361L, 7},
    {1, 2605477791L, 7},
    {2, 891408307L, 7},
    {1, 2581013211L, 7},
    {2, 842937507L, 7},
    {1, 1278501893L, 6},
    {2, 795364315L, 7},
    {2, 771906565L, 7},
    {2, 748664025L, 7},
    {2, 725633745L, 7},
    {2, 702812831L, 7},
    {2, 680198441L, 7},
    {2, 657787785L, 7},
    {2, 635578121L, 7},
    {2, 613566757L, 7},
    {1, 2443359173L, 7},
    {2, 570128403L, 7},
    {2, 548696263L, 7},
    {2, 527452125L, 7},
    {1, 1200340205L, 6},
    {2, 485518043L, 7},
    {2, 464823301L, 7},
    {1, 2369637129L, 7},
    {2, 423966729L, 7},
    {2, 403800345L, 7},
    {2, 383805589L, 7},
    {1, 582368447L, 5},
    {2, 344322273L, 7},
    {1, 1154949189L, 6},
    {1, 2300233531L, 7},
    {1, 2290649225L, 7},
    {1, 285143057L, 4},
    {2, 248469183L, 7},
    {1, 2262369605L, 7},
    {1, 1126548799L, 6},
    {2, 192835267L, 7},
    {2, 174592167L, 7},
    {2, 156496785L, 7},
    {2, 138547333L, 7},
    {2, 120742053L, 7},
    {1, 274877907L, 4},
    {1, 2190262207L, 7},
    {2, 68174085L, 7},
    {1, 2172947881L, 7},
    {2, 33818641L, 7},
    {1, 2155905153L, 7},
    {0, 0, 8},
};
int64_t table_s32[][3] = {
    {0, 0, 1},
    {1, 1431655766L, 0},
    {0, 0, 2},
    {1, 1717986919L, 1},
    {1, 715827883L, 0},
    {1, 2454267027L, 2},
    {0, 0, 3},
    {1, 954437177L, 1},
    {1, 1717986919L, 2},
    {1, 780903145L, 1},
    {1, 715827883L, 1},
    {1, 1321528399L, 2},
    {1, 2454267027L, 3},
    {1, 2290649225L, 3},
    {0, 0, 4},
    {1, 2021161081L, 3},
    {1, 954437177L, 2},
    {1, 1808407283L, 3},
    {1, 1717986919L, 3},
    {1, 818089009L, 2},
    {1, 780903145L, 2},
    {1, 2987803337L, 4},
    {1, 715827883L, 2},
    {1, 1374389535L, 3},
    {1, 1321528399L, 3},
    {1, 1272582903L, 3},
    {1, 2454267027L, 4},
    {1, 2369637129L, 4},
    {1, 2290649225L, 4},
    {1, 2216757315L, 4},
    {0, 0, 5},
    {1, 1041204193L, 3},
    {1, 2021161081L, 4},
    {1, 3926827243L, 5},
    {1, 954437177L, 3},
    {1, 3714566311L, 5},
    {1, 1808407283L, 4},
    {1, 3524075731L, 5},
    {1, 1717986919L, 4},
    {1, 1676084799L, 4},
    {1, 818089009L, 3},
    {1, 799063683L, 3},
    {1, 780903145L, 3},
    {1, 3054198967L, 5},
    {1, 2987803337L, 5},
    {1, 2924233053L, 5},
    {1, 715827883L, 3},
    {1, 1402438301L, 4},
    {1, 1374389535L, 4},
    {1, 2694881441L, 5},
    {1, 1321528399L, 4},
    {1, 1296593901L, 4},
    {1, 1272582903L, 4},
    {1, 156180629L, 1},
    {1, 2454267027L, 5},
    {1, 2411209711L, 5},
    {1, 2369637129L, 5},
    {1, 582368447L, 3},
    {1, 2290649225L, 5},
    {1, 1126548799L, 4},
    {1, 2216757315L, 5},
    {1, 2181570691L, 5},
    {0, 0, 6},
    {1, 2114445439L, 5},
    {1, 1041204193L, 4},
    {1, 128207979L, 1},
    {1, 2021161081L, 5},
    {1, 1991868891L, 5},
    {1, 3926827243L, 6},
    {1, 3871519817L, 6},
    {1, 954437177L, 4},
    {1, 3765450781L, 6},
    {1, 3714566311L, 6},
    {1, 458129845L, 3},
    {1, 1808407283L, 5},
    {1, 892460737L, 4},
    {1, 3524075731L, 6},
    {1, 1739733589L, 5},
    {1, 1717986919L, 5},
    {1, 424194301L, 3},
    {1, 1676084799L, 5},
    {1, 827945503L, 4},
    {1, 818089009L, 4},
    {1, 1616928865L, 5},
    {1, 799063683L, 4},
    {1, 789879043L, 4},
    {1, 780903145L, 4},
    {1, 3088515809L, 6},
    {1, 3054198967L, 6},
    {1, 3020636341L, 6},
    {1, 2987803337L, 6},
    {1, 738919105L, 4},
    {1, 2924233053L, 6},
    {1, 2893451653L, 6},
    {1, 715827883L, 4},
    {1, 354224107L, 3},
    {1, 1402438301L, 5},
    {1, 2776544515L, 6},
    {1, 1374389535L, 5},
    {1, 680390859L, 4},
    {1, 2694881441L, 6},
    {1, 333589693L, 3},
    {1, 1321528399L, 5},
    {1, 2617884829L, 6},
    {1, 1296593901L, 5},
    {1, 1284476201L, 5},
    {1, 1272582903L, 5},
    {1, 2521815661L, 6},
    {1, 156180629L, 2},
    {1, 2476377541L, 6},
    {1, 2454267027L, 6},
    {1, 1216273925L, 5},
    {1, 2411209711L, 6},
    {1, 1195121335L, 5},
    {1, 2369637129L, 6},
    {1, 2349383821L, 6},
    {1, 582368447L, 4},
    {1, 1154949189L, 5},
    {1, 2290649225L, 6},
    {1, 70991195L, 1},
    {1, 1126548799L, 5},
    {1, 558694933L, 4},
    {1, 2216757315L, 6},
    {1, 274877907L, 3},
    {1, 2181570691L, 6},
    {1, 2164392969L, 6},
    {0, 0, 7},
    {1, 266354561L, 3},
    {1, 2114445439L, 6},
    {1, 1049152317L, 5},
    {1, 1041204193L, 5},
    {1, 4133502361L, 7},
    {1, 128207979L, 2},
    {1, 4072265289L, 7},
    {1, 2021161081L, 6},
    {1, 125400505L, 2},
    {1, 1991868891L, 6},
    {1, 1977538899L, 6},
    {1, 3926827243L, 7},
    {1, 974744351L, 5},
    {1, 3871519817L, 7},
    {1, 961111563L, 5},
    {1, 954437177L, 5},
    {1, 3791419407L, 7},
    {1, 3765450781L, 7},
    {1, 1869917735L, 6},
    {1, 3714566311L, 7},
    {1, 230602271L, 3},
    {1, 458129845L, 4},
    {1, 910191745L, 5},
    {1, 1808407283L, 6},
    {1, 3593175255L, 7},
    {1, 892460737L, 5},
    {1, 443351463L, 4},
    {1, 3524075731L, 7},
    {1, 875407347L, 5},
    {1, 1739733589L, 6},
    {1, 432197967L, 4},
    {1, 1717986919L, 6},
    {1, 3414632385L, 7},
    {1, 424194301L, 4},
    {1, 210795941L, 3},
    {1, 1676084799L, 6},
    {1, 1665926709L, 6},
    {1, 827945503L, 5},
    {1, 1645975491L, 6},
    {1, 818089009L, 5},
    {1, 1626496491L, 6},
    {1, 1616928865L, 6},
    {1, 3214946281L, 7},
    {1, 799063683L, 5},
    {1, 397222409L, 4},
    {1, 789879043L, 5},
    {1, 1570730897L, 6},
    {1, 780903145L, 5},
    {1, 3105965051L, 7},
    {1, 3088515809L, 7},
    {1, 3071261531L, 7},
    {1, 3054198967L, 7},
    {1, 759331235L, 5},
    {1, 3020636341L, 7},
    {1, 3004130131L, 7},
    {1, 2987803337L, 7},
    {1, 2971653049L, 7},
    {1, 738919105L, 5},
    {1, 2939870663L, 7},
    {1, 2924233053L, 7},
    {1, 2908760921L, 7},
    {1, 2893451653L, 7},
    {1, 2878302691L, 7},
    {1, 715827883L, 5},
    {1, 356059465L, 4},
    {1, 354224107L, 4},
    {1, 2819260585L, 7},
    {1, 1402438301L, 6},
    {1, 1395319325L, 6},
    {1, 2776544515L, 7},
    {1, 1381296015L, 6},
    {1, 1374389535L, 6},
    {1, 42735993L, 1},
    {1, 680390859L, 5},
    {1, 2708156719L, 7},
    {1, 2694881441L, 7},
    {1, 1340867839L, 6},
    {1, 333589693L, 4},
    {1, 663956297L, 5},
    {1, 1321528399L, 6},
    {1, 2630410593L, 7},
    {1, 2617884829L, 7},
    {1, 81421181L, 2},
    {1, 1296593901L, 6},
    {1, 2581013211L, 7},
    {1, 1284476201L, 6},
    {1, 1278501893L, 6},
    {1, 1272582903L, 6},
    {1, 2533436931L, 7},
    {1, 2521815661L, 7},
    {1, 2510300521L, 7},
    {1, 156180629L, 3},
    {1, 2487582869L, 7},
    {1, 2476377541L, 7},
    {1, 2465272709L, 7},
    {1, 2454267027L, 7},
    {1, 2443359173L, 7},
    {1, 1216273925L, 6},
    {1, 605457945L, 5},
    {1, 2411209711L, 7},
    {1, 1200340205L, 6},
    {1, 1195121335L, 6},
    {1, 2379895299L, 7},
    {1, 2369637129L, 7},
    {1, 2359467013L, 7},
    {1, 2349383821L, 7},
    {1, 2339386443L, 7},
    {1, 582368447L, 5},
    {1, 2319644785L, 7},
    {1, 1154949189L, 6},
    {1, 2300233531L, 7},
    {1, 2290649225L, 7},
    {1, 285143057L, 4},
    {1, 70991195L, 2},
    {1, 2262369605L, 7},
    {1, 1126548799L, 6},
    {1, 1121950641L, 6},
    {1, 558694933L, 5},
    {1, 2225732041L, 7},
    {1, 2216757315L, 7},
    {1, 2207854675L, 7},
    {1, 274877907L, 4},
    {1, 2190262207L, 7},
    {1, 2181570691L, 7},
    {1, 2172947881L, 7},
    {1, 2164392969L, 7},
    {1, 2155905153L, 7},
    {1, 2147483649L, 7},
};
}}}
