DECLARE 
emp employee%ROWTYPE; 
dc employee.deptcode%type; 
ec number; 
noqual exception; 
mulqual exception;
BEGIN
dc := &dc; 
SELECT count(*) INTO ec FROM employee WHERE deptcode =dc;
IF(ec != 1) THEN 
    IF(ec=0) THEN 
        RAISE noqual; 
    ELSE 
        RAISE mulqual; 
    END IF;
ELSE 
SELECT * into emp FROM employee WHERE deptcode = dc; 
DBMS_OUTPUT.PUT_LINE('EMPLOYEE DETAILS:  ' || emp.empfname||' '||emp.emplname||' ,depid: ' ||emp.deptcode||' , sal= '||emp.salary); 
END IF;
EXCEPTION
WHEN noqual THEN 
    DBMS_OUTPUT.PUT_LINE('No employees with such qualification');
WHEN mulqual THEN 
    DBMS_OUTPUT.PUT_LINE('More than one employee with such qualification');
END;
/