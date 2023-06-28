# Write your MySQL query statement below
SELECT id, (CASE
WHEN p_id is NULL THEN 'Root'
WHEN NOT EXISTS (SELECT t1.id FROM tree t2 WHERE t1.id = t2.p_id) THEN 'Leaf'
ELSE 'Inner' END) as Type
FROM tree t1;