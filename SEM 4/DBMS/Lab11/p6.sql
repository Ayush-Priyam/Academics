CREATE OR REPLACE PACKAGE pfunproc as 
PROCEDURE roomproc(rn IN location4.roomid%type); 
FUNCTION crsfunc(A crssection4.csid%type)RETURN crssection4.maxcount%type; 
END pfunproc;
/
CREATE OR REPLACE PACKAGE BODY pfunproc AS
PROCEDURE roomproc (rn IN location4.roomid%type) IS 
cap location4.capacity%type;
bld location4.building%type; 
BEGIN 
SELECT capacity, building into cap, bld from location4 where roomid = rn; 
DBMS_OUTPUT.PUT_LINE('Room id:'||rn||',   Room Capacity: '||cap||', Building name: '||bld);
EXCEPTION 
    WHEN NO_DATA_FOUND THEN DBMS_OUTPUT.PUT_LINE('ROOM ID doesnt exist');
END roomproc;
FUNCTION crsfunc(A crssection4.csid%type) RETURN crssection4.maxcount%type IS 
ccount crssection4.maxcount%type; 
BEGIN SELECT maxcount into ccount from crssection4 where csid = A; 
RETURN ccount; 
END crsfunc;
END pfunproc;
/
EXECUTE pfunproc.roomproc(13);