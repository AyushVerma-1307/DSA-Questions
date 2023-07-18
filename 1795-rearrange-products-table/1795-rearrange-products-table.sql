# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT product_id,"store1" as store,store1 as price
FROM Products
WHERE store1 IS NOT NULL
UNION SELECT product_id,"store2",store2
FROM Products
WHERE store2 IS NOT NULL
UNION SELECT product_id,"store3",store3
FROM Products
WHERE store3 IS NOT NULL;