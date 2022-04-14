echo "Testing printf with 100000000 calls"
time ./printf 100000000 > /dev/null

echo "Testing cout with 100000000 calls"
time ./cout 100000000 > /dev/null

echo "Testing O3_printf with 100000000 calls"
time ./O3_printf 100000000 > /dev/null

echo "Testing O3_cout with 100000000 calls"
time ./O3_cout 100000000 >/dev/null
