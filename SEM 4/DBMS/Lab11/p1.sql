DECLARE
    fn employeeinfo.empfname%TYPE;
    ln employeeinfo.emplname%TYPE;
    n employeeinfo.empid%TYPE;
BEGIN
    n :=&empid;
    SELECT empfname, EMPLNAME into fn, ln from employeeinfo where empid=n;
    DBMS_OUTPUT.PUT_LINE(fn ||' '|| ln);
    EXCEPTION
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('Invalid EmpID');
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE(SQLCODE||'  '||SQLERRM);
END;
/