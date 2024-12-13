// *********************************************************
// Program: LightMariaDBInterpreter.cpp
// Course: CCP6114 Programming Fundamentals
// Lecture Class: TC3L
// Tutorial Class: TT5L
// Trimester: 2430
// Member_1: 242UC244SX | YAP YANG YI | YAP.YANG.YI@mmu.edu.my | 0169035825
// Member_2: ID | NAME | EMAIL | PHONE
// Member_3: ID | NAME | EMAIL | PHONE
// Member_4: ID | NAME | EMAIL | PHONE
// *********************************************************

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// --- Data Structures ---
struct Column {
    string name;
    string type; // "INT" or "TEXT"
};

struct Row {
    vector<string> values;
};

struct Table {
    string name;
    vector<Column> columns;
    vector<Row> rows;
};

class Database {
private:
    string dbName;
    map<string, Table> tables;

public:
    // Creates a new database by setting its name.
    // Outputs a confirmation message if successful.
    void createDatabase(const string &name);

    // Displays the current database name or a message indicating no database exists.
    void viewDatabase() const;

    // Adds a new table with the specified name and columns.
    // Ensures no duplicate table names exist.
    void createTable(const string &name, const vector<Column> &columns);

    // Lists all existing tables in the database or indicates if no tables exist.
    void viewTables() const;

    // Adds a new row to the specified table.
    // Validates the table's existence and checks column count.
    void insertRow(const string &tableName, const vector<string> &values);

    // Displays the structure and data of a specified table.
    void viewTable(const string &tableName) const;

    // Updates rows in a table based on a condition.
    // Modifies the value of a specific column if the condition is met.
    void updateRow(const string &tableName, const string &columnName, const string &newValue, const string &conditionColumn, const string &conditionValue);

    // Deletes rows from a table that satisfy a specific condition.
    void deleteRow(const string &tableName, const string &conditionColumn, const string &conditionValue);

    // Outputs the total number of rows in a specified table.
    void countRows(const string &tableName) const;
};

// --- File Handling ---
// Processes commands from a file and executes them on the database object.
void processFile(const string &fileName, Database &db);


// --- Main ---
int main() {
    Database db;

    string fileName = "fileInput.mdb";
    processFile(fileName, db);

    db.viewDatabase();
    db.viewTables();

    return 0;
}