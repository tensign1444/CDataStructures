/**
 * @file Utility.h
 *
 * @author Tanner Ensign, Michael Vaquilar, Masaya Takahashi
 *
 * @date 1/31/2023
 */

#ifndef DATASTRUCTURES_UTILITY_H
#define DATASTRUCTURES_UTILITY_H

/// Compares two 32 bit integers to each-other.
/// \param element1 void pointer to the first integer
/// \param element2 void pointer to the second integer
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_int32_t(const void *element1, const void *element2);

/// Compares two 64 bit integers to each-other.
/// \param element1 void pointer to the first integer.
/// \param element2 void pointer to the second integer.
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_int64_t(const void *element1, const void *element2);

/// Compares two floats to each-other.
/// \param element1 void pointer to the first float.
/// \param element2 void pointer to the second float.
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_float(const void *element1, const void *element2);

/// Compares two double's to each-other.
/// \param element1 void pointer to the first double.
/// \param element2 void pointer to the second double.
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_double(const void *element1, const void *element2);

/// Compares two long doubles to each-other.
/// \param element1 void pointer to the first long double.
/// \param element2 void pointer to the second long double.
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_long_double(const void *element1, const void *element2);

/// Compares two char's to each-other.
/// \param element1 void pointer to the first char.
/// \param element2 void pointer to the second char.
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_char(const void *element1, const void *element2);

/// Compares two strings to each-other.
/// \param element1 void pointer to the first string.
/// \param element2 void pointer to the second string.
/// \return int, 1 when the first element is greater than the second, -1 when the first element is less than the second, 0 when both elements are equal.
int compare_string(const void *element1, const void *element2);

#endif //DATASTRUCTURES_UTILITY_H
