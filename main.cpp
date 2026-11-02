#include <iostream>
#include <memory>

#include "Employee.h"

int main()
{
    const std::unique_ptr<FullTime> John = std::make_unique<FullTime>(8'000, 85'000, 0001);

    const auto Genie = std::make_unique<PartTime>(30, 12.25, 1001); // Also works apparently

    const auto Machine = std::make_unique<PartTime>(168, 0, 9999);


    John->print();

    Genie->print();

    Machine->print();

    return 0;
}
