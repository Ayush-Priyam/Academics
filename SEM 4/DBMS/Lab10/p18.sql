DECLARE 
    b building5.bid%TYPE; 
    vrec building5%ROWTYPE;
    CURSOR CSR(bidd building5.bid%TYPE) IS SELECT * FROM building5 WHERE bid = bidd FOR UPDATE OF bid, capacity NOWAIT; 
BEGIN
    b:=&b; 
    OPEN CSR(b); 
    LOOP
        FETCH CSR INTO vrec; 
        EXIT WHEN CSR%NOTFOUND;
        UPDATE building5 SET capacity=vrec.capacity*1.2 WHERE CURRENT OF CSR; 
        END LOOP; 
    CLOSE CSR;
END;
/