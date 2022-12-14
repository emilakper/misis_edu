

include_directories(.)

add_subdirectory(geom)

#add_executable (1512c 1512c.cpp)

#add_executable (cat_and_mice cat_and_mice.cpp)
#target_link_libraries(cat_and_mice vectormath)

#add_executable (cat_and_mice-2variant cat_and_mice-2variant.cpp)
#target_link_libraries(cat_and_mice-2variant vectormath)

add_executable (gravitymovement gravitymovement.cpp)
target_link_libraries(gravitymovement geom)



add_executable (vectormath01 
	vectormath.test.cpp
	vectormath.test.sum.cpp
)
target_link_libraries(vectormath01 geom)


add_executable (vectormath01doctest 
	vectormath.doctest.cpp
)
target_link_libraries(vectormath01doctest geom)