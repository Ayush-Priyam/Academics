DECLARE 
    CURSOR CSR(sal2 employee.salary%TYPE) IS SELECT empfname,emplname,salary,hiredate FROM employee where salary>sal2; 
    fname employee.empfname%TYPE; 
    lname employee.emplname%TYPE; 
    sal employee.salary%TYPE; 
    dt employee.hiredate%TYPE;
    isal employee.salary%TYPE;
BEGIN 
    isal:=&isal;
    OPEN CSR(isal);
    IF CSR%ISOPEN THEN 
        LOOP
            FETCH CSR INTO lname,fname,sal,dt; 
        EXIT WHEN CSR%NOTFOUND; 
        IF CSR%FOUND THEN
                DBMS_OUTPUT.PUT_LINE('Name :'||fname||' '||lname); 
                DBMS_OUTPUT.PUT_LINE('Salary : Rs.'||sal);
                DBMS_OUTPUT.PUT_LINE('Date of hiring: '||dt); 
            END IF; 
        END LOOP; 
    ELSE DBMS_OUTPUT.PUT_LINE('Unable to open the cursor');
    END IF; 
    CLOSE CSR;
END;
/