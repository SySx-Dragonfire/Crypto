//
// Created by dragonfire on 21.07.19.
//

#define BOOST_TEST_MODULE LoginTest

#include <boost/test/unit_test.hpp>
BOOST_AUTO_TEST_SUITE(Login)

    BOOST_AUTO_TEST_CASE(Passwort_Pruefung){

        for(int i=0; i<1567890; ++i){
            BOOST_CHECK(true);

        }
        BOOST_CHECK(1 == 2);
        BOOST_CHECK_EQUAL(1, 2);
        BOOST_CHECK_GE(1, 2);


    }BOOST_AUTO_TEST_CASE(Passwort_Pruef){

        for(int i=0; i<1567890; ++i){
            BOOST_CHECK(true);

        }
        BOOST_CHECK(false);

    }
BOOST_AUTO_TEST_SUITE_END()