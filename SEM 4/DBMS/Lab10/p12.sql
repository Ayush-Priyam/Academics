set serveroutput on;
DECLARE
    n number;
    i number;
BEGIN
    n:= &n;
    for i in 1..n loop
        IF(MOD(i,2)=1) then
            dbms_output.put_line(i);
        end if;
    end loop;
END;
/