#include "tests.h"
#include "TestRunner/test_runner.h"


void TestAll() {
    TestRunner tr;
    tr.RunTest(TestParseEvent, "TestParseEvent");
    tr.RunTest(TestParseCondition, "TestParseCondition");
    tr.RunTest(TestParseDate, "TestParseDate");
    tr.RunTest(TestDateOutput, "TestDateOutput");
    tr.RunTest(TestDatabaseAddAndPrint, "TestDatabaseAddAndPrint");
    tr.RunTest(TestDatabaseFind, "TestDatabaseFind");
    tr.RunTest(TestDatabaseRemove, "TestDatabaseRemove");
    tr.RunTest(TestDatabaseLast, "TestDatabaseLast");
    tr.RunTest(TestDateComparisonNode, "TestDateComparisonNode");
    tr.RunTest(TestEventComparisonNode, "TestEventComparisonNode");
    tr.RunTest(TestLogicalOperationNode, "TestLogicalOperationNode");
}
