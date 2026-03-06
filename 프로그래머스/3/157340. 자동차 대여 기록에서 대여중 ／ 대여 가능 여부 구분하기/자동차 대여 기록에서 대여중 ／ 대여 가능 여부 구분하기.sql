-- 코드를 입력하세요
# SELECT CAR_ID , CASE WHEN( 
# FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
WITH A as (
select * 
      from CAR_RENTAL_COMPANY_RENTAL_HISTORY 
      where start_date <= '2022-10-16' and end_date>= '2022-10-16'
)

SELECT CAR_ID, 
(case
   when SUM((case
     when start_date <= '2022-10-16' and end_date>= '2022-10-16' then 1
    else 0
end)) = 1 then '대여중'
 else '대여 가능'
 end
 )as AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY 
group by CAR_ID
ORDER BY CAR_ID DESC