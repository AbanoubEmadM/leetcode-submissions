SELECT employee_id
FROM (
    SELECT employee_id FROM employees
    UNION
    SELECT employee_id FROM salaries
) AS all_ids
WHERE employee_id NOT IN (select employees.employee_id from employees
JOIN salaries on employees.employee_id = salaries.employee_id)
order by employee_id asc;

