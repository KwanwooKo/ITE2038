if(EXISTS "/home/kwanwoo/Desktop/database/project3/db_project/build/test/db_test[1]_tests.cmake")
  include("/home/kwanwoo/Desktop/database/project3/db_project/build/test/db_test[1]_tests.cmake")
else()
  add_test(db_test_NOT_BUILT db_test_NOT_BUILT)
endif()
