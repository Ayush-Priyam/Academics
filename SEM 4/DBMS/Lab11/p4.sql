CREATE OR REPLACE PROCEDURE srstu(stid in number, fn out varchar, ln out varchar, p out number) IS
BEGIN 
    select first, last, phone into fn, ln, p from student4 where STUDENTID=stid;
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('Student doesnt exist');
END srstu;
/
DECLARE
    id Student4.STUDENTID%TYPE;
    fnn Student4.first%TYPE;
    lnn Student4.last%TYPE;
    ph Student4.phone%TYPE;
BEGIN
    id:=&id;
    srstu(id, fnn, lnn, ph);
    DBMS_OUTPUT.PUT_LINE('STUDENT DETAILS: '|| id||','||fnn||' '||lnn||', '||ph);
END;
/