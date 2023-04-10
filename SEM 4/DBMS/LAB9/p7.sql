SET SERVEROUTPUT ON;
DECLARE 
    e_ename VARCHAR2(20); 
    e_eid NUMBER; 
    e_sal NUMBER; 
    e_com number; 
    id number; 
    e_sum number; 
BEGIN 
    id :=&id;
    INSERT INTO employee(ename,eid,sal,com) VALUES('Suresh',25,29000,1800);
    COMMIT; 
    SELECT ename,eid,sal,com INTO e_ename,e_eid,e_sal,e_com FROM employee WHERE eid =id; 
    e_sum :=e_sal+e_com; 
    dbms_output.put_line('Employee Name: '||e_ename); 
    dbms_output.put_line('Employee ID: '||e_eid); 
    dbms_output.put_line('Employee Salary: Rs. '||e_sal); 
    dbms_output.put_line('Employee Commission: Rs. '||e_com); 
    dbms_output.put_line('Sum of salary and commission : '|| e_sum); 
END;
/