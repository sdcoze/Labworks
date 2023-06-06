
START TRANSACTION;
SELECT h_id, model, size_tb FROM harddisk WHERE h_id = 1;
LOCK TABLE harddisk IN EXCLUSIVE MODE;
UPDATE harddisk SET model = 'Transcend StoreJet' WHERE h_id = 1;
SELECT h_id, model, size_tb FROM harddisk WHERE h_id = 1;
COMMIT;

START TRANSACTION;
SELECT h_id, model, size_tb FROM harddisk WHERE h_id = 1;
LOCK TABLE harddisk IN EXCLUSIVE MODE;
UPDATE harddisk SET model = 'Seagate BarraCuda' WHERE h_id = 1;
SELECT h_id, model, size_tb FROM harddisk WHERE h_id = 1;
COMMIT;


