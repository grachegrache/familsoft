var fs = require('fs');

function datasetup() {
    this.protocol = {
        login_method: {android: 0, ios: 1, guest: 2},
        message_type: {chat: 0, friend: 1},
        relationship_type: {friend: 0, block: 1},
        gender: {female: 0, male: 1},
        furniture_type: {floor: -1, wall: -2, bed: 0, chair: 1, etc: 2, frame: 3, plant: 4, rug: 5, table: 6, window: 7},
        furnitureLength: 8,
        clothLength: 7,
        cloth_type: {skin: 0, shoes: 1, hair: 2, face: 3, bottom: 4, top: 5, hairac: 6},
        table_num: {closet: 0, floorNwall: 1, house: 2},
        cashamount: {
            'fortunecloset.onegem': 5000,
            'fortunecloset.twogem': 11000,
            'fortunecloset.threegem': 17000,
            'fortunecloset.fourgem': 23000,
            'fortunecloset.fivegem': 29000,
            'fortunecloset.sixgem': 35000,
            'fortunecloset.sevengem': 42500,
            'fortunecloset.eightgem': 50000,
            'fortunecloset.ninegem': 60000,
            'fortunecloset.tengem': 75000
        },
        flower_value: [3,4,3,4,2,2,2,5,1,2,1,1,2,1,2],
        slot_value: [100,300,500,700,900,1100]
    };
    this.io;
    this.version = 33;
    this.itemPrice = [[undefined, [], [], [], [], [], []], [[], []], [[], [], [], [], [], [], [], []]];
    this.skinLength = 10;
    var mysql = require('sync-mysql');
    var db = new mysql({
        host: 'localhost',
        user: 'root',
        password: '12345678',
        database: 'fortunecloset',
        multipleStatements: true,
      });

    this.init = function(instance){
        // db.query('SELECT version FROM update_server;',function(err, data){
        //     if(err){
        //         console.error(err);
        //         return;
        //     }
        //     instance.version = data[0].version;
        //     console.log("version "+version);
        // });
        console.log("version "+instance.version);
        instance.setItemPrice(instance);
        instance.deleteAllFlower();
    };
    
    this.setItemPrice = function(instance){
        //shoes
        instance.itemPrice[0][1][4] = 12000;
        instance.itemPrice[0][1][5] = 8000;
        instance.itemPrice[0][1][6] = 8000;
        instance.itemPrice[0][1][7] = 12000;
        instance.itemPrice[0][1][8] = 8000;
        instance.itemPrice[0][1][9] = 8000;
        instance.itemPrice[0][1][10] = 8000;
        instance.itemPrice[0][1][11] = 8000;
        instance.itemPrice[0][1][12] = 12000;
        instance.itemPrice[0][1][13] = 12000;
        instance.itemPrice[0][1][14] = 8000;
        instance.itemPrice[0][1][15] = 8000;
        instance.itemPrice[0][1][16] = 8000;
        instance.itemPrice[0][1][17] = 12000;
        instance.itemPrice[0][1][18] = 8000;
        instance.itemPrice[0][1][19] = 8000;
        instance.itemPrice[0][1][20] = 12000;
        instance.itemPrice[0][1][21] = 12000;
        instance.itemPrice[0][1][22] = 8000;
        instance.itemPrice[0][1][23] = 12000;
        instance.itemPrice[0][1][24] = 8000;
        instance.itemPrice[0][1][25] = 12000;
        instance.itemPrice[0][1][26] = 12000;
        instance.itemPrice[0][1][27] = 12000;
        instance.itemPrice[0][1][28] = 8000;
        instance.itemPrice[0][1][29] = 12000;
        instance.itemPrice[0][1][30] = 8000;
        instance.itemPrice[0][1][31] = 8000;
        instance.itemPrice[0][1][32] = 12000;
        instance.itemPrice[0][1][33] = 12000;
        instance.itemPrice[0][1][34] = 8000;
        instance.itemPrice[0][1][35] = 12000;
        instance.itemPrice[0][1][36] = 8000;
        instance.itemPrice[0][1][37] = 12000;
        instance.itemPrice[0][1][38] = 12000;
        instance.itemPrice[0][1][39] = 12000;
        instance.itemPrice[0][1][40] = 12000;

        // instance.itemPrice[0][1][41] = 12000;
        // instance.itemPrice[0][1][42] = 12000;
        // instance.itemPrice[0][1][43] = 12000;

        //hair
        instance.itemPrice[0][2][4] = 12000;
        instance.itemPrice[0][2][5] = 12000;
        instance.itemPrice[0][2][6] = 12000;
        instance.itemPrice[0][2][7] = 12000;
        instance.itemPrice[0][2][8] = 12000;
        instance.itemPrice[0][2][9] = 12000;
        instance.itemPrice[0][2][10] = 16000;
        instance.itemPrice[0][2][11] = 12000;
        instance.itemPrice[0][2][12] = 16000;
        instance.itemPrice[0][2][13] = 12000;
        instance.itemPrice[0][2][14] = 12000;
        instance.itemPrice[0][2][15] = 12000;
        instance.itemPrice[0][2][16] = 16000;
        instance.itemPrice[0][2][17] = 16000;
        instance.itemPrice[0][2][18] = 12000;
        instance.itemPrice[0][2][19] = 16000;
        instance.itemPrice[0][2][20] = 12000;
        instance.itemPrice[0][2][21] = 12000;
        instance.itemPrice[0][2][22] = 12000;
        instance.itemPrice[0][2][23] = 16000;
        instance.itemPrice[0][2][24] = 12000;
        instance.itemPrice[0][2][25] = 12000;
        instance.itemPrice[0][2][26] = 16000;
        instance.itemPrice[0][2][27] = 16000;
        instance.itemPrice[0][2][28] = 12000;
        instance.itemPrice[0][2][29] = 12000;
        instance.itemPrice[0][2][30] = 12000;
        instance.itemPrice[0][2][31] = 16000;
        instance.itemPrice[0][2][32] = 12000;
        instance.itemPrice[0][2][33] = 12000;
        instance.itemPrice[0][2][34] = 12000;
        instance.itemPrice[0][2][35] = 12000;
        instance.itemPrice[0][2][36] = 16000;
        instance.itemPrice[0][2][37] = 16000;
        instance.itemPrice[0][2][38] = 16000;
        instance.itemPrice[0][2][39] = 16000;
        instance.itemPrice[0][2][40] = 12000;
        instance.itemPrice[0][2][41] = 12000;
        instance.itemPrice[0][2][42] = 12000;
        instance.itemPrice[0][2][43] = 12000;
        instance.itemPrice[0][2][44] = 16000;
        instance.itemPrice[0][2][45] = 12000;
        instance.itemPrice[0][2][46] = 16000;
        instance.itemPrice[0][2][47] = 12000;
        instance.itemPrice[0][2][48] = 16000;
        instance.itemPrice[0][2][49] = 12000;
        instance.itemPrice[0][2][50] = 12000;
        instance.itemPrice[0][2][51] = 12000;
        instance.itemPrice[0][2][52] = 12000;
        instance.itemPrice[0][2][53] = 12000;
        instance.itemPrice[0][2][54] = 16000;
        instance.itemPrice[0][2][55] = 12000;
        instance.itemPrice[0][2][56] = 12000;
        instance.itemPrice[0][2][57] = 12000;
        instance.itemPrice[0][2][58] = 12000;
        instance.itemPrice[0][2][59] = 16000;
        instance.itemPrice[0][2][60] = 12000;
        instance.itemPrice[0][2][61] = 12000;
        instance.itemPrice[0][2][62] = 12000;
        instance.itemPrice[0][2][63] = 16000;
        instance.itemPrice[0][2][64] = 12000;
        instance.itemPrice[0][2][65] = 12000;
        instance.itemPrice[0][2][66] = 12000;
        instance.itemPrice[0][2][67] = 16000;
        instance.itemPrice[0][2][68] = 16000;
        instance.itemPrice[0][2][69] = 16000;
        instance.itemPrice[0][2][70] = 12000;
        instance.itemPrice[0][2][71] = 12000;
        instance.itemPrice[0][2][72] = 16000;
        instance.itemPrice[0][2][73] = 16000;
        instance.itemPrice[0][2][74] = 12000;
        instance.itemPrice[0][2][75] = 12000;
        instance.itemPrice[0][2][76] = 12000;
        instance.itemPrice[0][2][77] = 16000;
        instance.itemPrice[0][2][78] = 16000;
        instance.itemPrice[0][2][79] = 12000;

        // instance.itemPrice[0][2][80] = 16000;
        // instance.itemPrice[0][2][81] = 16000;
        // instance.itemPrice[0][2][82] = 16000;
        // instance.itemPrice[0][2][83] = 12000;
        // instance.itemPrice[0][2][84] = 16000;
        // instance.itemPrice[0][2][85] = 12000;
        // instance.itemPrice[0][2][86] = 16000;

        //face
        instance.itemPrice[0][3][4] = 12000;
        instance.itemPrice[0][3][5] = 12000;
        instance.itemPrice[0][3][6] = 12000;
        instance.itemPrice[0][3][7] = 12000;
        instance.itemPrice[0][3][8] = 12000;
        instance.itemPrice[0][3][9] = 12000;
        instance.itemPrice[0][3][10] = 16000;
        instance.itemPrice[0][3][11] = 12000;
        instance.itemPrice[0][3][12] = 12000;
        instance.itemPrice[0][3][13] = 16000;
        instance.itemPrice[0][3][14] = 16000;
        instance.itemPrice[0][3][15] = 12000;
        instance.itemPrice[0][3][16] = 12000;
        instance.itemPrice[0][3][17] = 12000;
        instance.itemPrice[0][3][18] = 16000;
        instance.itemPrice[0][3][19] = 12000;
        instance.itemPrice[0][3][20] = 12000;
        instance.itemPrice[0][3][21] = 12000;
        instance.itemPrice[0][3][22] = 12000;
        instance.itemPrice[0][3][23] = 16000;
        instance.itemPrice[0][3][24] = 12000;
        instance.itemPrice[0][3][25] = 12000;
        instance.itemPrice[0][3][26] = 12000;
        instance.itemPrice[0][3][27] = 16000;
        instance.itemPrice[0][3][28] = 16000;
        instance.itemPrice[0][3][29] = 12000;
        instance.itemPrice[0][3][30] = 12000;
        instance.itemPrice[0][3][31] = 12000;
        instance.itemPrice[0][3][32] = 12000;
        instance.itemPrice[0][3][33] = 12000;
        instance.itemPrice[0][3][34] = 12000;
        instance.itemPrice[0][3][35] = 12000;
        instance.itemPrice[0][3][36] = 16000;
        instance.itemPrice[0][3][37] = 12000;
        instance.itemPrice[0][3][38] = 12000;
        instance.itemPrice[0][3][39] = 12000;
        instance.itemPrice[0][3][40] = 16000;
        instance.itemPrice[0][3][41] = 12000;
        instance.itemPrice[0][3][42] = 16000;
        instance.itemPrice[0][3][43] = 12000;
        instance.itemPrice[0][3][44] = 16000;
        instance.itemPrice[0][3][45] = 16000;
        instance.itemPrice[0][3][46] = 16000;
        instance.itemPrice[0][3][47] = 12000;
        instance.itemPrice[0][3][48] = 12000;
        instance.itemPrice[0][3][49] = 12000;
        instance.itemPrice[0][3][50] = 16000;
        instance.itemPrice[0][3][51] = 12000;
        instance.itemPrice[0][3][52] = 16000;
        instance.itemPrice[0][3][53] = 12000;
        instance.itemPrice[0][3][54] = 12000;
        instance.itemPrice[0][3][55] = 12000;
        instance.itemPrice[0][3][56] = 16000;
        instance.itemPrice[0][3][57] = 12000;
        instance.itemPrice[0][3][58] = 12000;
        instance.itemPrice[0][3][59] = 12000;
        instance.itemPrice[0][3][60] = 12000;
        instance.itemPrice[0][3][61] = 16000;
        instance.itemPrice[0][3][62] = 12000;
        instance.itemPrice[0][3][63] = 12000;
        instance.itemPrice[0][3][64] = 12000;
        instance.itemPrice[0][3][65] = 16000;
        instance.itemPrice[0][3][66] = 16000;
        instance.itemPrice[0][3][67] = 12000;
        instance.itemPrice[0][3][68] = 16000;
        instance.itemPrice[0][3][69] = 16000;
        instance.itemPrice[0][3][70] = 12000;

        // instance.itemPrice[0][3][71] = 12000;
        // instance.itemPrice[0][3][72] = 16000;
        // instance.itemPrice[0][3][73] = 16000;
        // instance.itemPrice[0][3][74] = 12000;
        // instance.itemPrice[0][3][75] = 20000;
        // instance.itemPrice[0][3][76] = 12000;
        // instance.itemPrice[0][3][77] = 16000;
        // instance.itemPrice[0][3][78] = 12000;

        //bottom
        instance.itemPrice[0][4][4] = 10000;
        instance.itemPrice[0][4][5] = 10000;
        instance.itemPrice[0][4][6] = 10000;
        instance.itemPrice[0][4][7] = 10000;
        instance.itemPrice[0][4][8] = 10000;
        instance.itemPrice[0][4][9] = 10000;
        instance.itemPrice[0][4][10] = 10000;
        instance.itemPrice[0][4][11] = 14000;
        instance.itemPrice[0][4][12] = 10000;
        instance.itemPrice[0][4][13] = 14000;
        instance.itemPrice[0][4][14] = 10000;
        instance.itemPrice[0][4][15] = 10000;
        instance.itemPrice[0][4][16] = 14000;
        instance.itemPrice[0][4][17] = 10000;
        instance.itemPrice[0][4][18] = 14000;
        instance.itemPrice[0][4][19] = 10000;
        instance.itemPrice[0][4][20] = 10000;
        instance.itemPrice[0][4][21] = 10000;
        instance.itemPrice[0][4][22] = 14000;
        instance.itemPrice[0][4][23] = 10000;
        instance.itemPrice[0][4][24] = 10000;
        instance.itemPrice[0][4][25] = 14000;
        instance.itemPrice[0][4][26] = 10000;
        instance.itemPrice[0][4][27] = 10000;
        instance.itemPrice[0][4][28] = 10000;
        instance.itemPrice[0][4][29] = 10000;
        instance.itemPrice[0][4][30] = 12000;
        instance.itemPrice[0][4][31] = 10000;
        instance.itemPrice[0][4][32] = 12000;
        instance.itemPrice[0][4][33] = 14000;
        instance.itemPrice[0][4][34] = 10000;
        instance.itemPrice[0][4][35] = 14000;
        instance.itemPrice[0][4][36] = 10000;
        instance.itemPrice[0][4][37] = 14000;
        instance.itemPrice[0][4][38] = 14000;
        instance.itemPrice[0][4][39] = 14000;
        instance.itemPrice[0][4][40] = 10000;
        instance.itemPrice[0][4][41] = 14000;
        instance.itemPrice[0][4][42] = 14000;
        instance.itemPrice[0][4][43] = 10000;

        // instance.itemPrice[0][4][44] = 14000;
        // instance.itemPrice[0][4][45] = 10000;

        //top
        instance.itemPrice[0][5][4] = 12000;
        instance.itemPrice[0][5][5] = 12000;
        instance.itemPrice[0][5][6] = 12000;
        instance.itemPrice[0][5][7] = 20000;
        instance.itemPrice[0][5][8] = 12000;
        instance.itemPrice[0][5][9] = 12000;
        instance.itemPrice[0][5][10] = 12000;
        instance.itemPrice[0][5][11] = 16000;
        instance.itemPrice[0][5][12] = 12000;
        instance.itemPrice[0][5][13] = 12000;
        instance.itemPrice[0][5][14] = 16000;
        instance.itemPrice[0][5][15] = 12000;
        instance.itemPrice[0][5][16] = 16000;
        instance.itemPrice[0][5][17] = 16000;
        instance.itemPrice[0][5][18] = 16000;
        instance.itemPrice[0][5][19] = 12000;
        instance.itemPrice[0][5][20] = 12000;
        instance.itemPrice[0][5][21] = 20000;
        instance.itemPrice[0][5][22] = 12000;
        instance.itemPrice[0][5][23] = 12000;
        instance.itemPrice[0][5][24] = 12000;
        instance.itemPrice[0][5][25] = 20000;
        instance.itemPrice[0][5][26] = 12000;
        instance.itemPrice[0][5][27] = 16000;
        instance.itemPrice[0][5][28] = 16000;
        instance.itemPrice[0][5][29] = 20000;
        instance.itemPrice[0][5][30] = 16000;
        instance.itemPrice[0][5][31] = 12000;
        instance.itemPrice[0][5][32] = 20000;
        instance.itemPrice[0][5][33] = 16000;
        instance.itemPrice[0][5][34] = 12000;
        instance.itemPrice[0][5][35] = 12000;
        instance.itemPrice[0][5][36] = 12000;
        instance.itemPrice[0][5][37] = 12000;
        instance.itemPrice[0][5][38] = 12000;
        instance.itemPrice[0][5][39] = 12000;
        instance.itemPrice[0][5][40] = 12000;
        instance.itemPrice[0][5][41] = 16000;
        instance.itemPrice[0][5][42] = 12000;
        instance.itemPrice[0][5][43] = 20000;
        instance.itemPrice[0][5][44] = 16000;
        instance.itemPrice[0][5][45] = 12000;
        instance.itemPrice[0][5][46] = 12000;
        instance.itemPrice[0][5][47] = 16000;
        instance.itemPrice[0][5][48] = 20000;
        instance.itemPrice[0][5][49] = 16000;
        instance.itemPrice[0][5][50] = 12000;
        instance.itemPrice[0][5][51] = 16000;
        instance.itemPrice[0][5][52] = 12000;
        instance.itemPrice[0][5][53] = 20000;
        instance.itemPrice[0][5][54] = 12000;
        instance.itemPrice[0][5][55] = 12000;
        instance.itemPrice[0][5][56] = 12000;
        instance.itemPrice[0][5][57] = 20000;
        instance.itemPrice[0][5][58] = 12000;
        instance.itemPrice[0][5][59] = 16000;
        instance.itemPrice[0][5][60] = 20000;
        instance.itemPrice[0][5][61] = 16000;
        instance.itemPrice[0][5][62] = 20000;
        instance.itemPrice[0][5][63] = 16000;
        instance.itemPrice[0][5][64] = 12000;
        instance.itemPrice[0][5][65] = 16000;
        instance.itemPrice[0][5][66] = 12000;
        instance.itemPrice[0][5][67] = 16000;
        instance.itemPrice[0][5][68] = 12000;
        instance.itemPrice[0][5][69] = 20000;
        instance.itemPrice[0][5][70] = 16000;
        instance.itemPrice[0][5][71] = 16000;
        instance.itemPrice[0][5][72] = 20000;
        instance.itemPrice[0][5][73] = 16000;
        instance.itemPrice[0][5][74] = 12000;
        instance.itemPrice[0][5][75] = 20000;
        instance.itemPrice[0][5][76] = 12000;
        instance.itemPrice[0][5][77] = 16000;
        instance.itemPrice[0][5][78] = 20000;
        instance.itemPrice[0][5][79] = 12000;
        instance.itemPrice[0][5][80] = 12000;
        instance.itemPrice[0][5][81] = 12000;
        instance.itemPrice[0][5][82] = 16000;
        instance.itemPrice[0][5][83] = 16000;
        instance.itemPrice[0][5][84] = 16000;
        instance.itemPrice[0][5][85] = 12000;
        instance.itemPrice[0][5][86] = 12000;
        instance.itemPrice[0][5][87] = 12000;

        // instance.itemPrice[0][5][88] = 16000;
        // instance.itemPrice[0][5][89] = 16000;
        // instance.itemPrice[0][5][90] = 16000;
        // instance.itemPrice[0][5][91] = 16000;
        // instance.itemPrice[0][5][92] = 12000;
        // instance.itemPrice[0][5][93] = 20000;

        //hairac
        instance.itemPrice[0][6][4] = 8000;
        instance.itemPrice[0][6][5] = 8000;
        instance.itemPrice[0][6][6] = 12000;
        instance.itemPrice[0][6][7] = 8000;
        instance.itemPrice[0][6][8] = 8000;
        instance.itemPrice[0][6][9] = 8000;
        instance.itemPrice[0][6][10] = 8000;
        instance.itemPrice[0][6][11] = 12000;
        instance.itemPrice[0][6][12] = 8000;
        instance.itemPrice[0][6][13] = 12000;
        instance.itemPrice[0][6][14] = 8000;
        instance.itemPrice[0][6][15] = 12000;
        instance.itemPrice[0][6][16] = 8000;
        instance.itemPrice[0][6][17] = 8000;
        instance.itemPrice[0][6][18] = 8000;
        instance.itemPrice[0][6][19] = 8000;
        instance.itemPrice[0][6][20] = 8000;
        instance.itemPrice[0][6][21] = 12000;
        instance.itemPrice[0][6][22] = 12000;
        instance.itemPrice[0][6][23] = 8000;
        instance.itemPrice[0][6][24] = 8000;
        instance.itemPrice[0][6][25] = 8000;
        instance.itemPrice[0][6][26] = 8000;
        instance.itemPrice[0][6][27] = 12000;
        instance.itemPrice[0][6][28] = 8000;
        instance.itemPrice[0][6][29] = 16000;
        instance.itemPrice[0][6][30] = 8000;
        instance.itemPrice[0][6][31] = 8000;
        instance.itemPrice[0][6][32] = 12000;
        instance.itemPrice[0][6][33] = 12000;
        instance.itemPrice[0][6][34] = 8000;
        instance.itemPrice[0][6][35] = 8000;
        instance.itemPrice[0][6][36] = 8000;
        instance.itemPrice[0][6][37] = 12000;
        instance.itemPrice[0][6][38] = 8000;
        instance.itemPrice[0][6][39] = 8000;
        instance.itemPrice[0][6][40] = 8000;
        instance.itemPrice[0][6][41] = 12000;

        // instance.itemPrice[0][6][42] = 12000;
        // instance.itemPrice[0][6][43] = 12000;
        // instance.itemPrice[0][6][44] = 12000;
        // instance.itemPrice[0][6][45] = 12000;
        // instance.itemPrice[0][6][46] = 12000;
        // instance.itemPrice[0][6][47] = 12000;

        //floor
        instance.itemPrice[1][0][1] = 12000;
        instance.itemPrice[1][0][2] = 12000;
        instance.itemPrice[1][0][3] = 12000;
        instance.itemPrice[1][0][4] = 12000;
        instance.itemPrice[1][0][5] = 12000;
        instance.itemPrice[1][0][6] = 12000;
        instance.itemPrice[1][0][7] = 14000;
        instance.itemPrice[1][0][8] = 14000;
        instance.itemPrice[1][0][9] = 12000;
        instance.itemPrice[1][0][10] = 14000;
        instance.itemPrice[1][0][11] = 12000;
        instance.itemPrice[1][0][12] = 12000;
        instance.itemPrice[1][0][13] = 12000;

        // instance.itemPrice[1][0][14] = 14000;

        //wall
        instance.itemPrice[1][1][1] = 12000;
        instance.itemPrice[1][1][2] = 12000;
        instance.itemPrice[1][1][3] = 14000;
        instance.itemPrice[1][1][4] = 12000;
        instance.itemPrice[1][1][5] = 12000;
        instance.itemPrice[1][1][6] = 14000;
        instance.itemPrice[1][1][7] = 14000;
        instance.itemPrice[1][1][8] = 12000;
        instance.itemPrice[1][1][9] = 12000;
        instance.itemPrice[1][1][10] = 12000;
        instance.itemPrice[1][1][11] = 12000;
        instance.itemPrice[1][1][12] = 12000;
        instance.itemPrice[1][1][13] = 12000;

        // instance.itemPrice[1][1][14] = 14000;

        //bed
        instance.itemPrice[2][0][0] = 10000;
        instance.itemPrice[2][0][1] = 10000;
        instance.itemPrice[2][0][2] = 10000;
        instance.itemPrice[2][0][3] = 12000;
        instance.itemPrice[2][0][4] = 12000;
        instance.itemPrice[2][0][5] = 10000;
        //chair
        instance.itemPrice[2][1][0] = 8000;
        instance.itemPrice[2][1][1] = 8000;
        instance.itemPrice[2][1][2] = 8000;
        instance.itemPrice[2][1][3] = 8000;
        instance.itemPrice[2][1][4] = 8000;
        instance.itemPrice[2][1][5] = 8000;
        instance.itemPrice[2][1][6] = 8000;
        instance.itemPrice[2][1][7] = 10000;
        instance.itemPrice[2][1][8] = 8000;
        instance.itemPrice[2][1][9] = 8000;

        // instance.itemPrice[2][1][10] = 10000;

        //etc
        instance.itemPrice[2][2][0] = 8000;
        instance.itemPrice[2][2][1] = 8000;
        instance.itemPrice[2][2][2] = 8000;
        instance.itemPrice[2][2][3] = 8000;
        instance.itemPrice[2][2][4] = 8000;
        instance.itemPrice[2][2][5] = 8000;
        instance.itemPrice[2][2][6] = 10000;
        instance.itemPrice[2][2][7] = 8000;
        instance.itemPrice[2][2][8] = 8000;
        instance.itemPrice[2][2][9] = 8000;
        instance.itemPrice[2][2][10] = 8000;
        instance.itemPrice[2][2][11] = 8000;
        instance.itemPrice[2][2][12] = 8000;
        instance.itemPrice[2][2][13] = 8000;
        instance.itemPrice[2][2][14] = 10000;
        instance.itemPrice[2][2][15] = 8000;
        instance.itemPrice[2][2][16] = 8000;
        instance.itemPrice[2][2][17] = 8000;
        instance.itemPrice[2][2][18] = 10000;
        instance.itemPrice[2][2][19] = 10000;
        instance.itemPrice[2][2][20] = 8000;
        instance.itemPrice[2][2][21] = 8000;
        instance.itemPrice[2][2][22] = 12000;
        instance.itemPrice[2][2][23] = 8000;
        instance.itemPrice[2][2][24] = 10000;

        // instance.itemPrice[2][2][25] = 8000;
        // instance.itemPrice[2][2][26] = 8000;
        // instance.itemPrice[2][2][27] = 10000;
        // instance.itemPrice[2][2][28] = 10000;

        //frame
        instance.itemPrice[2][3][0] = 8000;
        instance.itemPrice[2][3][1] = 8000;
        instance.itemPrice[2][3][2] = 8000;
        instance.itemPrice[2][3][3] = 8000;
        instance.itemPrice[2][3][4] = 8000;
        instance.itemPrice[2][3][5] = 8000;
        instance.itemPrice[2][3][6] = 8000;
        instance.itemPrice[2][3][7] = 10000;
        instance.itemPrice[2][3][8] = 8000;
        instance.itemPrice[2][3][9] = 8000;

        // instance.itemPrice[2][3][10] = 8000;

        //plant
        instance.itemPrice[2][4][0] = 8000;
        instance.itemPrice[2][4][1] = 8000;
        instance.itemPrice[2][4][2] = 8000;
        //rug
        instance.itemPrice[2][5][0] = 8000;
        instance.itemPrice[2][5][1] = 8000;
        instance.itemPrice[2][5][2] = 8000;
        instance.itemPrice[2][5][3] = 8000;
        //table
        instance.itemPrice[2][6][0] = 12000;
        instance.itemPrice[2][6][1] = 12000;
        instance.itemPrice[2][6][2] = 12000;
        instance.itemPrice[2][6][3] = 12000;
        instance.itemPrice[2][6][4] = 14000;
        instance.itemPrice[2][6][5] = 14000;
        instance.itemPrice[2][6][6] = 14000;
        instance.itemPrice[2][6][7] = 12000;
        //window
        instance.itemPrice[2][7][0] = 8000;
        instance.itemPrice[2][7][1] = 8000;
        instance.itemPrice[2][7][2] = 8000;
        instance.itemPrice[2][7][3] = 8000;
        instance.itemPrice[2][7][4] = 10000;
        instance.itemPrice[2][7][5] = 10000;
        // db.query('SELECT * FROM item_price;', function(err, res) {
        //     if (err) {
        //         console.error(err);
        //         return;
        //     }
        //     instance.itemPrice = [];
        //     for(var i=0; i<res.length; i++){
        //         let table_num = res[i].table_num;
        //         let type = res[i].type;
        //         let num = res[i].num;
        //         if(instance.itemPrice[table_num] == undefined){
        //             instance.itemPrice[table_num] = [];
        //         }
        //         if(instance.itemPrice[table_num][type] == undefined){
        //             instance.itemPrice[table_num][type] = [];
        //         }
        //         instance.itemPrice[table_num][type][num] = res[i].cash;
        //     }
        // });
    };

    // this.connect = function(callback) {
    //     var instance = this;
    //     db = mysql.createConnection(config);
    //     db.connect(function(err) {
    //         if (err) {
    //             console.error('error connecting mysql :' + err);
    //             setTimeout(module.exports.connect, 1000, callback);
    //             return;
    //         }
    //         console.log('Connected as database ' + config.database);
    //         instance.init(instance);
    //         callback(err);
    //     });
    //     db.on('error', function(err) {
    //         console.log('db error', err);
    //         if (err.code === 'PROTOCOL_CONNECTION_LOST') {
    //             module.exports.connect(callback);
    //         } else {
    //             throw err;
    //         }
    //     });
    // };
    this.securityRecord = function(email, name, pin, desc) {
        var res = {};
        let jobj = {'result': 'fail', 'desc': desc, 'email': email, 'name': name, 'pin': pin};
        try{
            res.data = db.query('INSERT INTO security_record (jobj,time) VALUES (?,now())', [JSON.stringify(jobj)]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        return res;
    };

    this.getUserFromUid = function(login_method, uid, callback) {
        var res = {};
        try{
            res.data = db.query('SELECT * FROM member WHERE login_method=? AND uid=?', [login_method, uid]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };
    this.getUserFromNick = function(nickname, callback) {
        var res = {};
        try{
            res.data = db.query('SELECT nickname,cash,hair,face,bottom,shoes,skin,top,hairac,profile,language,recent_date FROM member WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };
    this.getUsersFromNick = function(nicknames, callback) {
        var res = {};
        if(nicknames.length == 0){
            res.data = [];
        }else{
            var q = 'SELECT nickname,cash,hair,face,bottom,shoes,skin,top,hairac,language,recent_date FROM member WHERE ';
            for (var i=0; i<nicknames.length; i++) {
                q += 'nickname=?';
                if (i+1 < nicknames.length)
                    {q += " OR ";}
            }
            q += " ORDER BY recent_date DESC";
            try{
                res.data = db.query(q, nicknames);
            }catch(err){
                console.error(err);
                res.error = err;
            }
        }
        
        callback(res.error, res.data);
        return res;
    };

    this.searchUsers = function(query, callback){
        var res = {};
        var q = 'SELECT nickname,cash,hair,face,bottom,shoes,skin,top,hairac,language,recent_date FROM member WHERE nickname LIKE ? AND nickname<>? ORDER BY nickname ASC LIMIT 50;';
        try{
            res.data = db.query(q, ["%"+query+"%",query]);
            var keyword = db.query('SELECT nickname,cash,hair,face,bottom,shoes,skin,top,hairac,language,recent_date FROM member WHERE nickname=?', [query]);
            if(keyword.length>0){
                res.data.unshift(keyword[0]);
            }
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getFashionDate = function(nickname, callback) {
        var res = {};
        try{
            res.data = db.query('SELECT fashion_date FROM member WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.updateFashionDate = function(nickname, callback) {
        var res = {};
        try{
            res.data = db.query('UPDATE member SET fashion_date=now() WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.updateRecentDate = function(login_method, uid, language, callback) {
        var res = {};
        try{
            res.data = db.query('UPDATE member SET language=?, recent_date=now() WHERE login_method=? AND uid=?', [language, login_method, uid]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getBlockDate = function(uid, callback){
        var res = {};
        try{
            res.data = db.query('SELECT block_date FROM member WHERE uid=?', [uid]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.setBlockDate = function(nickname, date, callback){
        var res = {};
        try{
            res.data = db.query('UPDATE member SET block_date=? WHERE nickname=?', [date, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.setUserCash = function(nickname, cash, callback) {
        var res = {};
        try{
            res.data = db.query('UPDATE member SET cash=? WHERE nickname=?', [cash, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };
    this.addFastCash = function(nickname, amount, callback) {
        var res = {};
        try{
            res.data = db.query('UPDATE member SET cash=cash+? WHERE nickname=?', [amount, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addUserCash = function(nickname, amount, callback){
        var res = {};
        try{
            var data = db.query('SELECT cash FROM member WHERE nickname=?',[nickname]);
            db.query('UPDATE member SET cash=? WHERE nickname=?', [data[0].cash + amount, nickname]);
            res.data = data[0].cash + amount;
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.setUserProfile = function(nickname, profile, callback) {
        var res = {};
        try{
            res.data = db.query('UPDATE member SET profile=? WHERE nickname=?', [profile, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.checkNickname = function(nickname, callback) {
        var res = {};
        try{
            res.data = db.query('SELECT * FROM member WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.register = function(nickname, gender, login_data, callback) {
        var res = {};
        // var clothes = [0,0,0,0,0,0];
        // var q = "INSERT INTO member (login_method, uid, nickname, gender, cash, email, language, recent_date";
        // if(gender == this.protocol.gender.male){
        //     q += ", hair, face, skin, top";
        // }
        // q += ") VALUES (?,?,?,?,0,?,?,now()";
        // if(gender == this.protocol.gender.male){
        //     q += ", 1, 1, 1, 1";
        //     clothes[0] = 1;
        //     clothes[1] = 1;
        //     clothes[4] = 1;
        //     clothes[5] = 1;
        // }
        var clothes = [0, 0, 0, 0, 0, 0];
        var q = 'INSERT INTO member (login_method, uid, nickname, gender, cash, email, language, recent_date, fashion_date';
        if (gender == this.protocol.gender.male) {
            q += ', hair, face, skin, top) VALUES (?,?,?,?,1000,?,?,now(),now() - INTERVAL 1 HOUR, 1, 1, 1, 1)';
            clothes[0] = 1;
            clothes[1] = 1;
            clothes[4] = 1;
            clothes[5] = 1;
        } else{
            q += ') VALUES (?,?,?,?,1000,?,?,now(),now() - INTERVAL 1 HOUR)';
        }

        try{
            db.query(q, [login_data[0], login_data[1], nickname, gender, login_data[2], login_data[3]]);
            res.data = db.query('SELECT * FROM member WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getFurnitures = function(nickname, callback) {
        var res = {};
        try{
            res.data = {};
            res.data.house = db.query('SELECT * FROM house WHERE nickname=?', [nickname]);
            res.data.floorNwall = db.query('SELECT * FROM floorNwall WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getCurrentFurnitures = function(nickname, includeMember, callback) {
        var res = {};
        try{
            var furnitures = db.query('SELECT furniture_type,furniture_num,furniture_loc FROM house WHERE nickname=? AND furniture_loc IS NOT NULL', [nickname]);
            if(includeMember){
                res.data = db.query('SELECT floor,wall FROM member WHERE nickname=?', [nickname])[0];
                res.data.furnitures = furnitures;
            }else{
                res.data = furnitures;
            }
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.checkFurniture = function(nickname, data, callback) {
        var res = {};
        var table;
        if (data.furniture_type < 0) {
            table = 'floorNwall';
            if (data.furniture_type == -1) {
                data.furniture_type = 0;
            } else if (data.furniture_type == -2) {
                data.furniture_type = 1;
            }
        } else{
            table = 'house';
        }

        try{
            res.data = db.query('SELECT * FROM '+table+' WHERE nickname=? AND furniture_type=? AND furniture_num=?', [nickname, data.furniture_type, data.furniture_num]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.checkFurnitures = function(nickname, data, callback) {
        var res = {};
        var table;
        var q = '';
        var param = [];
        for (var i=0; i<data.length; i++) {
            if (data[i].furniture_type < 0) {
                table = 'floorNwall';
                if (data[i].furniture_type == -1) {
                    data[i].furniture_type = 0;
                } else if (data[i].furniture_type == -2) {
                    data[i].furniture_type = 1;
                }
            }else {
                table = 'house';
            }
            q += 'SELECT furniture_type,furniture_num FROM '+table+' WHERE nickname=? AND furniture_type=? AND furniture_num=?';
            param.push(nickname);
            param.push(data[i].furniture_type);
            param.push(data[i].furniture_num);
            if (i < data.length-1) {
                q += ' UNION ALL ';
            }
        }
        
        try{
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addFurniture = function(nickname, data, callback) {
        var res = {};
        var table;
        if (data.furniture_type < 0) {
            table = 'floorNwall';
            if (data.furniture_type == -1) {
                data.furniture_type = 0;
            } else if (data.furniture_type == -2) {
                data.furniture_type = 1;
            }
        }else {
            table = 'house';
        }

        try{
            res.data = db.query('INSERT INTO '+table+' (nickname, furniture_type, furniture_num) VALUES (?,?,?)', [nickname, data.furniture_type, data.furniture_num]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addFurnitures = function(nickname, data, callback){
        var res = {};
        var q = '';
        var param = [];
        var table;
        for(var i=0; i<data.length; i++){
            if (data[i].table_num == this.protocol.table_num.floorNwall) {
                table = 'floorNwall';
            } else if (data[i].table_num == this.protocol.table_num.house) {
                table = 'house';
            }

            q += 'INSERT INTO '+table+' (nickname, furniture_type, furniture_num) VALUES (?,?,?);';
            param.push(nickname);
            param.push(data[i].furniture_type);
            param.push(data[i].furniture_num);
        }
        
        try{
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    // this.addFurnitureFromRandom = function(nickname, table_num, type, num, callback) {
    //     var res = {};
    //     var table;
    //     if (table_num == this.protocol.table_num.floorNwall) {
    //         table = 'floorNwall';
    //     } else if (table_num == this.protocol.table_num.house) {
    //         table = 'house';
    //     }

    //     try{
    //         res.data = db.query('INSERT INTO '+table+' (nickname,furniture_type,furniture_num) VALUES (?,?,?)', [nickname, type, num]);
    //     }catch(err){
    //         console.error(err);
    //         res.error = err;
    //     }
    //     callback(res.error, res.data);
    //     return res;
    // };

    this.setCurrentFurnitures = function(nickname, data, callback) {
        if(data == undefined || data.length == 0){
            callback({error:'Invalid_data'}, undefined);
            return;
        }
        var res = {};
        var q = '';
        var param = [];
        var column;
        for (var i=0; i<data.length; i++) {
            if (data[i].furniture_type < 0) {
                if (data[i].furniture_type == -1) {
                    column = 'floor';
                } else if (data[i].furniture_type == -2) {
                    column = 'wall';
                }else {
                    console.error('Invalid furniture_type: '+data);
                    return;
                }

                q += 'UPDATE member SET '+column+'=? WHERE nickname=?;';
                param.push(data[i].furniture_num);
                param.push(nickname);
            } else{
                q += 'UPDATE house SET furniture_loc=? WHERE nickname=? AND furniture_type=? AND furniture_num=?;';
                if (data[i].furniture_loc == '')
                    {data[i].furniture_loc = null;}
                param.push(data[i].furniture_loc);
                param.push(nickname);
                param.push(data[i].furniture_type);
                param.push(data[i].furniture_num);
            }
        }

        try{
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    // this.removeFurniture = function(data, callback){
    //     var table;
    //     if(data.furniture_type < 0){
    //         table = 'floorNwall';
    //     }else{
    //         table = 'house';
    //     }

    //     db.query('DEvarE FROM '+table+' WHERE nickname=? AND furniture_type=? AND furniture_num=?',
    //         [data.nickname, data.furniture_type, data.furniture_num], function (err, res){
    //             if(err){ console.error(err);}
    //             callback(err, res);
    //         });
    // };

    this.getFriendList = function(nickname, callback) {
        var res = {};
        try{
            var data = db.query('SELECT nickname1 FROM relationship WHERE type=? AND nickname2=? UNION SELECT nickname2 FROM relationship WHERE type=? AND nickname1=?',
            [this.protocol.relationship_type.friend, nickname, this.protocol.relationship_type.friend, nickname]);
            
            var nicknames = [];
            for (var i=0; i<data.length; i++) {
                if (data[i]['nickname1'] != undefined) {
                    if(data[i]['nickname1'] != nickname){
                        nicknames.push(data[i]['nickname1']);
                    }
                } else if (data[i]['nickname2'] != undefined) {
                    if(data[i]['nickname2'] != nickname){
                        nicknames.push(data[i]['nickname2']);
                    }
                }
            }

            if (nicknames.length == 0) {
                res.data = nicknames;
            } else{
                var q = 'SELECT nickname,cash,hair,face,bottom,shoes,skin,top,hairac,language,recent_date FROM member WHERE ';
                for (var i=0; i<nicknames.length; i++) {
                    q += 'nickname=?';
                    if (i+1 < nicknames.length)
                        {q += " OR ";}
                }
                res.data = db.query(q, nicknames);
            }
                
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.checkFriend = function(nickname1, nickname2, callback) {
        var res = {};
        try{
            res.data = db.query('SELECT * FROM relationship WHERE type=? AND nickname1=? AND nickname2=? UNION SELECT * FROM relationship WHERE type=? AND nickname1=? AND nickname2=?;',
            [this.protocol.relationship_type.friend, nickname1, nickname2, this.protocol.relationship_type.friend, nickname2, nickname1]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addFriend = function(nickname, user, callback) {
        var res = {};
        try{
            res.data = db.query('INSERT INTO relationship (type, nickname1, nickname2) VALUES (?,?,?)', [this.protocol.relationship_type.friend, nickname, user]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.removeFriend = function(nickname, user, callback) {
        var res = {};
        try{
            res.data =
                db.query('DELETE FROM relationship WHERE type=? AND ((nickname1=? AND nickname2=?) OR (nickname1=? AND nickname2=?))',
                [this.protocol.relationship_type.friend, nickname, user, user, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.getBlockList = function(nickname, callback) {
        var res = {};
        try{
            var data =
                db.query('SELECT nickname2 FROM relationship WHERE type=? AND nickname1=?',
                [this.protocol.relationship_type.block, nickname]);
            if(data.length == 0){
                res.data = data;
            }else{
                var q = 'SELECT nickname,cash,hair,face,bottom,shoes,skin,top,hairac,language,recent_date FROM member WHERE ';
                var param = [];
                for (var i=0; i<data.length; i++) {
                    q += 'nickname=?';
                    if (i+1 < data.length){
                        q += " OR ";
                    }
                    param.push(data[i].nickname2);
                }

                res.data = db.query(q, param);
            }
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.checkBlock = function(nickname1, nickname2, callback) {
        var res = {};
        try{
            res.data =
                db.query('SELECT * FROM relationship WHERE type=? AND nickname1=? AND nickname2=?',
                [this.protocol.relationship_type.block, nickname1, nickname2]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.block = function(nickname, user, callback) {
        var res = {};
        try{
            res.data =
                db.query('INSERT INTO relationship (type, nickname1, nickname2) VALUES (?,?,?)',
                [this.protocol.relationship_type.block, nickname, user]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.unblock = function(nickname, user, callback) {
        var res = {};
        try{
            res.data =
            db.query('DELETE FROM relationship WHERE type=? AND nickname1=? AND nickname2=?',
            [this.protocol.relationship_type.block, nickname, user]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.getClothes = function(nickname, callback) {
        var res = {};
        try{
            res.data = db.query('SELECT * FROM closet WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.checkClothes = function(nickname, data, callback) {
        var res = {};
        var q = 'SELECT * FROM closet WHERE nickname=? AND (';
        var param = [nickname];
        for (var i=0; i<data.length; i++) {
            q += '(cloth_type=? AND cloth_num=?)';
            if (i < data.length-1) {
                q += ' OR ';
            }
            param.push(data[i].cloth_type);
            param.push(data[i].cloth_num);
        }
        q += ');';

        try{
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addCloth = function(nickname, type, num, callback) {
        var res = {};
        try{
            res.data = db.query('INSERT INTO closet (nickname, cloth_type, cloth_num) VALUES (?,?,?)', [nickname, type, num]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addClothes = function(nickname, data, callback) {
        var res = {};
        var q = '';
        var param = [];
        for (var i=0; i<data.length; i++) {
            q += 'INSERT INTO closet (nickname, cloth_type, cloth_num) VALUES (?,?,?);';
            param.push(nickname);
            param.push(data[i].cloth_type);
            param.push(data[i].cloth_num);
        }

        try{
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.setClothes = function(nickname, data, callback) {
        var res = {};
        var clothIndex = Object.keys(this.protocol.cloth_type);
        var param = [];
        for (var i=0; i<clothIndex.length; i++) {
            param.push(data[clothIndex[i]]);
        }
        param.push(nickname);

        try{
            res.data = db.query('UPDATE member SET skin=?,shoes=?,hair=?,face=?,bottom=?,top=?,hairac=? WHERE nickname=?', param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getHaveItemLength = function(nickname, callback){
        var res = {};
        var q = '';
        var param = [];
        let clothLength = this.protocol.clothLength;
        let furnitureLength = this.protocol.furnitureLength;
        for(var i=0; i<clothLength; i++){
            q += 'SELECT COUNT(*) FROM closet WHERE nickname=? AND cloth_type=?'
            param.push(nickname);
            param.push(i);
            if(i < clothLength-1){
                q += ' UNION ALL ';
            }
        }

        try{
            res.data = [[],[],[]];

            var data = db.query(q, param);
            for(var i=0; i<data.length; i++){
                res.data[0].push(data[i]['COUNT(*)']);
            }
            
            q = 'SELECT COUNT(*) FROM floorNwall WHERE nickname=? AND furniture_type=0 UNION ALL SELECT COUNT(*) FROM floorNwall WHERE nickname=? AND furniture_type=1';
            param = [nickname, nickname];
            data = db.query(q, param);
            for(var i=0; i<data.length; i++){
                res.data[1].push(data[i]['COUNT(*)']);
            }

            q = '';
            param = [];
            for(var i=0; i<furnitureLength; i++){
                q += 'SELECT COUNT(*) FROM house WHERE nickname=? AND furniture_type=?'
                param.push(nickname);
                param.push(i);
                if(i < furnitureLength-1){
                    q += ' UNION ALL ';
                }
            }
            data = db.query(q, param);
            for(var i=0; i<data.length; i++){
                res.data[2].push(data[i]['COUNT(*)']);
            }
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getItemLength = function(){
        var resData = [];
        let tableNumIndex = Object.keys(this.protocol.table_num);
        for(var table_num=0; table_num<tableNumIndex.length; table_num++){
            resData.push([]);
            for(var type=0; type<this.itemPrice[table_num].length; type++){
                if(this.itemPrice[table_num][type] == undefined){
                    resData[table_num].push(0);
                }else{
                    resData[table_num].push(this.itemPrice[table_num][type].length);
                }
            }
        }

        return resData;
    };

    this.getItemPrice = function(table_num, type, num, callback) {
        if(this.itemPrice[table_num] == undefined
            || this.itemPrice[table_num][type] == undefined
            || this.itemPrice[table_num][type][num] == undefined){
                callback({error: 'no_item'}, undefined);
        }else{
            var data = [{'table_num':table_num, 'type':type, 'num':num, cash:this.itemPrice[table_num][type][num]}];
            callback(undefined, data);
        }
        
    };

    this.getItemPrices = function(data, callback) {
        for (var i=0; i<data.length; i++) {
            let table_num = data[i].table_num;
            let type = data[i].type;
            let num = data[i].num;

            if(this.itemPrice[table_num] == undefined
                || this.itemPrice[table_num][type] == undefined
                || this.itemPrice[table_num][type][num] == undefined){
                    callback({error: 'no_item'}, undefined);
                    return;
            }
            data[i].cash = this.itemPrice[table_num][type][num];
        }
        callback(undefined, data);
    };

    this.getItems = function(isCloth, callback) {
        var data;
        if(isCloth){
            data = addItemsFromTableNum(this.itemPrice, this.protocol.table_num.closet);
        }else{
            data = addItemsFromTableNum(this.itemPrice, this.protocol.table_num.floorNwall);
            data = data.concat(addItemsFromTableNum(this.itemPrice, this.protocol.table_num.house));
        }

        callback(undefined, data);
    };

    function addItemsFromTableNum(itemPrice, table_num){
        var data = [];
        for(var type=0; type<itemPrice[table_num].length; type++){
            if(itemPrice[table_num][type] != undefined){
                for(var num=0; num<itemPrice[table_num][type].length; num++){
                    if(itemPrice[table_num][type][num] != undefined){
                        data.push({'table_num':table_num, 'type':type, 'num':num});
                    }
                }
            }
        }
        return data;
    }

    this.addReport = function(data, filePath, callback){
        var res = {};
        try{
            res.data =
                db.query('INSERT INTO report (nickname, contents, screenshot, timestamp) VALUES (?,?,?,now())',
                [data.nickname,data.contents,filePath]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.checkTodayReport = function(nickname, callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM report WHERE nickname=? AND DATE(timestamp) = CURDATE()',[nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };
    
    this.checkIsUpdate = function(callback){
        var res = {};
        try{
            res.data = db.query('SELECT isUpdate FROM update_server;');
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    
    this.getReceipt = function(orderId, callback){
        var res = {};
        try{
            res.data = db.query('SELECT data FROM receipt WHERE orderId=?',[orderId]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addReceipt = function(nickname, orderId, data, os, callback){
        var res = {};
        try{
            res.data =
                db.query('INSERT INTO receipt (orderId,nickname,login_os,data) VALUES (?,?,?,?)',
                [orderId, nickname, os, JSON.stringify(data)]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.getFlower = function(nickname, num, callback){
        var res = {};
        try{
            res.data = db.query('SELECT respawn_time FROM flower WHERE nickname=? AND flowerNum=?',[nickname,num]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.updateFlower = function(nickname, num, callback){
        var res = {};
        try{
            res.data =
                db.query('UPDATE flower SET respawn_time=(now()+INTERVAL ? MINUTE) WHERE nickname=? AND flowerNum=?',
                [this.protocol.flower_value[num], nickname, num]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.addFlower = function(nickname, num, callback){
        var res = {};
        try{
            res.data =
                db.query('INSERT INTO flower (nickname,flowerNum,respawn_time) VALUES (?,?,now()+INTERVAL ? MINUTE)',
                [nickname, num, this.protocol.flower_value[num]]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.deleteAllFlower = function(){
        var res = {};
        try{
            res.data = db.query('DELETE FROM flower WHERE respawn_time <= now()');
        }catch(err){
            console.error(err);
            res.error = err;
        }
        // console.log(res.data.affectedRows);
        return res;
    };


    this.addSlot = function(nickname, slotNum, callback){
        var res = {};
        try{
            res.data =
                db.query('INSERT INTO slot (nickname,slotNum) VALUES (?,?)',
                [nickname, slotNum]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.getSlot = function(nickname, callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM slot WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.setSlot = function(nickname, data, callback){
        var res = {};
        try{
            res.data =
                db.query('UPDATE slot SET skin=?,shoes=?,hair=?,face=?,bottom=?,top=?,hairac=? WHERE nickname=? AND slotNum=?',
                [data.skin,data.shoes,data.hair,data.face,data.bottom,data.top,data.hairac, nickname, data.slotNum]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.checkSlot = function(nickname, slotNum, callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM slot WHERE nickname=? AND slotNum=?', [nickname, slotNum]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.getDiaryPost = function(owner, writer, callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM diary WHERE owner=? AND writer=?', [owner, writer]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        
        callback(res.error, res.data);
        return res;
    };

    this.getDiaryPosts = function(nickname, owner, isDiary, callback){
        var res = {};
        var q;
        var param = [];
        var isFriend = false;
        if(isDiary){
            q = 'SELECT * FROM diary WHERE owner=? AND writer=? AND ((access_level=3) OR (access_level=2 AND ?) OR (access_level=1 AND writer=?)) ORDER BY write_date DESC';
            if(nickname == owner){
                isFriend = true;
            }else{
                try{
                    if(db.query('SELECT * FROM relationship WHERE type=? AND nickname1=? AND nickname2=? UNION SELECT * FROM relationship WHERE type=? AND nickname1=? AND nickname2=?',
                        [this.protocol.relationship_type.friend, nickname, owner, this.protocol.relationship_type.friend, owner, nickname]).length > 0)
                        isFriend = true;
                }catch(err){
                    console.error(err);
                    res.error = err;
                    return res;
                }
            }
            param.push(owner);
            param.push(owner);
            param.push(isFriend);
            param.push(nickname);
        }else{
            q = 'SELECT * FROM diary WHERE owner=? AND writer!=? AND ((access_level=3) OR (access_level=1 AND (owner=? OR writer=?))) ORDER BY write_date DESC';
            param.push(owner);
            param.push(owner);
            param.push(nickname);
            param.push(nickname);
        }

        try{
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.addDiaryPost = function(writer, postData, callback){
        var res = {};
        try{
            if(postData.title == undefined){
                postData.title = null;
            }
            postData.write_date = new Date().toFormat('YYYY-MM-DD HH24:MI:SS');
            res.data = db.query('INSERT INTO diary (owner, writer, title, content, access_level, write_date) VALUES (?,?,?,?,?,?);',
                [postData.owner, writer, postData.title, postData.content, postData.access_level, postData.write_date]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.setDiaryPost = function(postData, callback){
        var res = {};
        try{
            if(postData.title == undefined){
                postData.title = null;
            }
            postData.write_date = new Date().toFormat('YYYY-MM-DD HH24:MI:SS');
            res.data = db.query('UPDATE diary SET title=?, content=?, access_level=?, write_date=? WHERE _id=?',
                [postData.title, postData.content, postData.access_level, postData.write_date, postData._id]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.checkDiaryPost = function(_id, callback){
        var res = {};
        try{
            res.data = db.query('SELECT owner,writer FROM diary WHERE _id=?', [_id]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.deleteDiaryPost = function(_id, callback){
        var res = {};
        try{
            res.data = db.query('DELETE FROM diary WHERE _id=?', [_id]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    //content, write_date
    this.setDiaryPostReply = function(_id, replyData, callback){
        var res = {};
        try{
            replyData.write_date = new Date().toFormat('YYYY-MM-DD HH24:MI:SS');
            res.data = db.query('UPDATE diary SET reply=? WHERE _id=?',
                [JSON.stringify(replyData), _id]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.deleteDiaryPostReply = function(_id, callback){
        var res = {};
        try{
            res.data = db.query('UPDATE diary SET reply=? WHERE _id=?',
                [null, _id]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.getHangmanWord = function(callback){
        var res = {};
        try{
            res.data = db.query('SELECT word FROM hangman_word ORDER BY RAND() LIMIT 1');
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback){
            callback(res.error, res.data);
        }
        
        return res;
    };

    this.getFountainRank = function(nickname,callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM fountain ORDER BY cash DESC LIMIT 20');
            res.user = db.query('SELECT cash FROM fountain WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback){
            callback(res.error, res.data, res.user);
        }
        
        return res;
    };

    this.addFountainCash = function(nickname, amount, callback){
        var res = {};
        try{
            var cash = db.query('SELECT cash FROM fountain WHERE nickname=?', [nickname]);
            var q;
            if(cash.length > 0){
                q = 'UPDATE fountain SET cash=cash+? WHERE nickname=?;UPDATE member SET cash=cash-? WHERE nickname=?';
            }else{
                q = 'INSERT INTO fountain (cash, nickname) VALUES (?,?);UPDATE member SET cash=cash-? WHERE nickname=?';
            }
            res.data = db.query(q, [amount, nickname, amount, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback){
            callback(res.error, res.data);
        }
        
        return res;
    };

    this.getAdopt = function(nickname, callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM adopt WHERE nickname=?', [nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.addAdopt = function(nickname, adoptNum, callback){
        var res = {};
        try{
            res.data =
                db.query('INSERT INTO adopt (nickname,adoptNum) VALUES (?,?);UPDATE member SET cash=cash-? WHERE nickname=?',
                [nickname, adoptNum, this.protocol.slot_value[adoptNum], nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.checkAdopt = function(nickname, adoptNum, callback){
        var res = {};
        try{
            res.data = db.query('SELECT * FROM adopt WHERE nickname=? AND adoptNum=?', [nickname, adoptNum]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.setAdoptData = function(nickname, adoptNum, adoptData, callback){
        var res = {};
        try{
            adoptData.adopt_date = new Date().toFormat('YYYY-MM-DD HH24:MI:SS');
            res.data = db.query('UPDATE adopt SET adoptData=? WHERE nickname=? AND adoptNum=?',
                [JSON.stringify(adoptData), nickname, adoptNum]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.raiseAdopt = function(nickname, adoptNum, status, amount, callback){
        var res = {};
        try{
            var q = 'UPDATE adopt SET '+status+'='+status+'+1 WHERE nickname=? AND adoptNum=?;UPDATE member SET cash=cash-? WHERE nickname=?'
            res.data = db.query(q, [nickname, adoptNum, amount, nickname]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };

    this.deleteAdopt = function(nickname, adoptNum, callback){
        var res = {};
        try{
            res.data =
            db.query('UPDATE adopt SET adoptData=?,speed=1,stamina=1,win_count=0,game_count=0 WHERE nickname=? AND adoptNum=?',
            [null, nickname, adoptNum]);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback != undefined){
            callback(res.error, res.data);
        }
        return res;
    };

    this.updateAdoptStatus = function(nickname, adoptNum, statuses, callback){
        var res = {};
        try{
            var q = 'UPDATE adopt SET';
            var param = [nickname, adoptNum];
            for(var i=0; i<statuses.length; i++){
                q += ' '+statuses[i]+'='+statuses[i]+'+1';
                if(i < statuses.length-1){
                    q += ',';
                }
            }
            q += ' WHERE nickname=? AND adoptNum=?';
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        if(callback){
            callback(res.error, res.data);
        }
        
        return res;
    };

    this.getRandomAdoptCharacters = function(callback){
        var res = {};
        try{
            var members = db.query('SELECT nickname FROM member ORDER BY recent_date DESC LIMIT 100');
            var q = '';
            var param = []
            for(var i=0; i<members.length; i++){
                let nickname = members[i].nickname;
                q += '(SELECT * FROM adopt WHERE nickname=? AND adoptData IS NOT NULL ORDER BY RAND() LIMIT 1)'
                if(i < members.length-1){
                    q += ' UNION ';
                }
                param.push(nickname);
            }
            res.data = db.query(q, param);
        }catch(err){
            console.error(err);
            res.error = err;
        }
        callback(res.error, res.data);
        return res;
    };
}

module.exports = new datasetup;
