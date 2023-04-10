SET SERVEROUTPUT ON;
DECLARE
    area   NUMBER(10, 2);
    radius NUMBER(10, 2);
    pi     CONSTANT NUMBER(10, 4) := 3.1416;
BEGIN
    radius := &radius;
    area := pi * radius * radius;
    dbms_output.put_line('Area of the circle is: ' || area);
END;
/