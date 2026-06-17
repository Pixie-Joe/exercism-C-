// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    int hours_per_day = 8;
    double rate_day = hourly_rate * hours_per_day;
    return rate_day;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double discount_rate_amount = before_discount * (discount / 100);
    double after_discount = before_discount - discount_rate_amount;
    return after_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    int day_per_month = 22;
    double monthly_before_discount = daily_rate(hourly_rate) * day_per_month;
    double monthly_discount_rate_amount = monthly_before_discount * (discount / 100);
    double monthly_after_discount = monthly_before_discount - monthly_discount_rate_amount;
    return std::ceil(monthly_after_discount);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double daily_discount_rate_amount = daily_rate(hourly_rate) * (discount / 100);
    double daily_after_discount = daily_rate(hourly_rate) - daily_discount_rate_amount;
    double num_days_budget = budget / daily_after_discount;
    return std::floor(num_days_budget);
}
