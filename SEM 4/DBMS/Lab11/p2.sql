DECLARE
    n employee.empcode%TYPE;
    fn employee.empfname%TYPE;
    ln employee.emplname%TYPE;
    err EXCEPTION;
BEGIN
    n :=&n;
    if n=100 THEN
        raise err;
    else
        SELECT empfname, EMPLNAME into fn, ln from employee where empcode=n;
        update employee set salary=1.15*salary where empcode= n;
        DBMS_OUTPUT.PUT_LINE('updated sal of: '||fn||' '|| ln);
    end if;
    EXCEPTION
    When err THEN
        DBMS_OUTPUT.PUT_LINE('Employee is suspended, cant increment');
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('Invalid EmpID');
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE(SQLCODE||'  '||SQLERRM);
END;
/