CREATE OR REPLACE FUNCTION srcdept(did NUMBER) RETURN varchar2 IS 
rv varchar2(5);
ddid department4.DEPTID%TYPE;
BEGIN
    rv:= 'false';
    select deptid into ddid from department4 where deptid= did;
    rv:='true';
    RETURN rv;
EXCEPTION
    WHEN others then RETURN rv;
END srcdept;
/
DECLARE
id department4.deptid%TYPE;
x varchar2(5);
BEGIN
id:= &id;
x:= srcdept(id);
DBMS_OUTPUT.PUT_LINE('OUTPUT: '||x);
END;
/