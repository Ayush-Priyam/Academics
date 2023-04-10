DECLARE 
    CURSOR CSR IS SELECT EMPFNAME, EMPLNAME,salary,hiredate FROM employee; 
    fname employee.empfname%TYPE; 
    lname employee.emplname%TYPE; 
    sal employee.salary%TYPE; 
    dt employee.hiredate%TYPE;
BEGIN 
    OPEN CSR;
    IF CSR%ISOPEN THEN 
        LOOP
            FETCH CSR INTO lname,fname,sal,dt; 
        EXIT WHEN CSR%NOTFOUND; 
        IF CSR%FOUND THEN
            IF((sal > 50000) AND (dt<'31-DEC-1997')) THEN
                DBMS_OUTPUT.PUT_LINE('Name :'||fname||' '||lname); 
                DBMS_OUTPUT.PUT_LINE('Salary : Rs.'||sal);
                DBMS_OUTPUT.PUT_LINE('Date of hiring: '||dt); 
                END IF;
            END IF; 
        END LOOP; 
    ELSE DBMS_OUTPUT.PUT_LINE('Unable to open the cursor');
    END IF; 
    CLOSE CSR;
END;
/