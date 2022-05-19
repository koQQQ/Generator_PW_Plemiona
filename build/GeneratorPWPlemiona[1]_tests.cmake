add_test( HelloTest.BasicAssertions D:/VSC/Test1/build/GeneratorPWPlemiona.exe [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY D:/VSC/Test1/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( GeneratorPWPlemiona_TESTS HelloTest.BasicAssertions)
