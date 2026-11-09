# Write your MySQL query statement below
select w.id from weather w join weather wi on datediff(w.recordDate, wi.recordDate)=1 where w.temperature>wi.temperature ;