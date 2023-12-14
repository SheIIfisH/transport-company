#include <iostream>
#include "mainmenu.h"
#include "table.h"
#include "premisesrow.h"
#include "employeerow.h"

int main()
{
    Table table {};
    table.newRow(new PremisesRow(0, "name", "address", "type"));
    table.newRow(new PremisesRow(1, "name", "address", "type"));
    table.showRows();
    table.deleteRow(0);
    table.deleteRow(1);
    std::cout << std::endl;
    table.newRow(new EmployeeRow(0, "fio", "position", "workplace"));
    table.newRow(new EmployeeRow(1, "fio", "position", "workplace"));
    table.showRows();
    table.deleteRow(0);
    table.deleteRow(1);

    return 0;
}

