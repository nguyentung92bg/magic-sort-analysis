/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleCollectionConverter$$WriteJson
void Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__WriteJson (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleCollectionConverter$$WriteJson
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__WriteJson
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter_o*
   __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__WriteJson_2f55c58
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,long *param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000005c308a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a568);
    FUN_012d0dc8(PTR_DAT_057f38d8);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057d3d10);
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_0576ca78);
    FUN_012d0dc8(PTR_DAT_057f4030);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_05813d78);
    FUN_012d0dc8(PTR_DAT_05805c10);
    FUN_012d0dc8(PTR_DAT_0576a538);
    FUN_012d0dc8(PTR_DAT_057b97d0);
    FUN_012d0dc8(PTR_DAT_0580eef0);
    FUN_012d0dc8(PTR_DAT_0577f980);
    FUN_012d0dc8(PTR_DAT_05796fd8);
    FUN_012d0dc8(PTR_DAT_057f42d0);
    bRam0000000005c308a5 = 1;
  }
  if (param_6 == (long *)0x0) {
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_057f38d8 + 300);
  if ((*(byte *)(*param_6 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057f38d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_6);
  }
  plVar7 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057d3d10);
  if (plVar7 != (long *)0x0) {
    Newtonsoft_Json_Linq_JArray___ctor_13783ac(plVar7,0);
    puVar5 = PTR_DAT_0577c730;
    puVar4 = PTR_DAT_0576ca78;
    lVar8 = param_6[3];
    if (lVar8 != 0) {
      if (0 < *(int *)(lVar8 + 0x18)) {
        iVar18 = 0;
        do {
          lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar8,iVar18,*(undefined8 *)PTR_DAT_057b0e08);
          if (lVar9 == 0) goto LAB_03056484;
          if (0 < *(int *)(lVar9 + 0x18)) {
            iVar21 = 0;
            do {
              lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar9,iVar21,*(undefined8 *)PTR_DAT_057b43e8);
              lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05813d78);
              if (((lVar11 == 0) ||
                  (System_Collections_Generic_List_object____ctor_21fc1fc
                             (lVar11,*(undefined8 *)PTR_DAT_057f4030), lVar10 == 0)) ||
                 (lVar24 = *(long *)(lVar10 + 0x80), lVar24 == 0)) goto LAB_03056484;
              if (0 < *(int *)(lVar24 + 0x18)) {
                iVar25 = 0;
                do {
                  lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar24,iVar25,*(undefined8 *)PTR_DAT_057f2468);
                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0581aec8);
                  if ((lVar13 == 0) ||
                     (Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar13,0), lVar12 == 0))
                  goto LAB_03056484;
                  uStack_70 = *(undefined8 *)(lVar12 + 0x10);
                  uStack_68 = *(undefined4 *)(lVar12 + 0x18);
                  uVar14 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05805c10,&uStack_70);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar5);
                  }
                  uVar14 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar14,param_7,0);
                  Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                            (lVar13,*(undefined8 *)PTR_DAT_0576a538,uVar14,0);
                  lVar22 = *(long *)(lVar12 + 0x20);
                  if (lVar22 != 0) {
                    lVar23 = *(long *)(lVar12 + 0x28);
                    lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0581aec8);
                    if (lVar12 == 0) goto LAB_03056484;
                    Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar12,0);
                    uVar14 = *(undefined8 *)PTR_DAT_0577f980;
                    lVar3 = lVar22;
                    if (lVar23 != 0) {
                      lVar3 = lVar23;
                    }
                    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                                      (*(undefined4 *)(lVar3 + 0x18),0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)puVar5);
                    }
                    uVar15 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar6,0);
                    uVar14 = Newtonsoft_Json_Linq_JObject__set_Item_15c6118(lVar12,uVar14,uVar15,0);
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__AddItemToJObject_2f5543c
                              (uVar14,lVar22,lVar12,param_7);
                    Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                              (lVar13,*(undefined8 *)PTR_DAT_05796fd8,lVar12,0);
                  }
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar22 = *(long *)puVar4;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_03056484;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    plVar16 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar16 = lVar13;
                    FUN_012d0d74(plVar16,lVar13);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar11,lVar13);
                  }
                  iVar25 = iVar25 + 1;
                } while (iVar25 < *(int *)(lVar24 + 0x18));
              }
              lVar24 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0581aec8);
              if (lVar24 == 0) goto LAB_03056484;
              Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar24,0);
              uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                                (*(undefined4 *)(lVar10 + 0x18),0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar5);
              }
              uVar14 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar6,0);
              Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                        (lVar24,*(undefined8 *)PTR_DAT_0577f980,uVar14,0);
              plVar16 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                          (lVar10,0);
              if (plVar16 == (long *)0x0) goto LAB_03056484;
              lVar12 = *plVar16;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    puVar17 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_03056190;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar17 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_0575a2d8,0);
LAB_03056190:
              uVar6 = (*(code *)*puVar17)(plVar16,puVar17[1]);
              uStack_70 = CONCAT44(param_2,uVar6);
              uStack_68 = param_3;
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05805c10,&uStack_70);
              uVar14 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar14,param_7,0);
              Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                        (lVar24,*(undefined8 *)PTR_DAT_057f42d0,uVar14,0);
              lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057d3d10);
              if (lVar12 == 0) goto LAB_03056484;
              Newtonsoft_Json_Linq_JArray___ctor_1378574(lVar12,lVar11,0);
              Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                        (lVar24,*(undefined8 *)PTR_DAT_0580eef0,lVar12,0);
              lVar10 = *(long *)(lVar10 + 0x88);
              if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x18))) {
                lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05813d78);
                if (lVar11 == 0) goto LAB_03056484;
                System_Collections_Generic_List_object____ctor_21fc1fc
                          (lVar11,*(undefined8 *)PTR_DAT_057f4030);
                if (0 < *(int *)(lVar10 + 0x18)) {
                  iVar25 = 0;
                  do {
                    lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar10,iVar25,*(undefined8 *)PTR_DAT_05802430);
                    lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0581aec8);
                    if ((lVar13 == 0) ||
                       (Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(lVar13,0), lVar12 == 0))
                    goto LAB_03056484;
                    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                                      (*(undefined4 *)(lVar12 + 0x18),0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)puVar5);
                    }
                    uVar14 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar6,0);
                    uVar14 = Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                                       (lVar13,*(undefined8 *)PTR_DAT_0577f980,uVar14,0);
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__AddItemToJObject_2f5543c
                              (uVar14,lVar12,lVar13,param_7);
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar22 = *(long *)puVar4;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_03056484;
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                      plVar16 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar16 = lVar13;
                      FUN_012d0d74(plVar16,lVar13);
                    }
                    else {
                      (**(code **)(*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x58) + 8)
                      )(lVar11,lVar13);
                    }
                    iVar25 = iVar25 + 1;
                  } while (iVar25 < *(int *)(lVar10 + 0x18));
                }
                lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057d3d10);
                if (lVar10 == 0) goto LAB_03056484;
                Newtonsoft_Json_Linq_JArray___ctor_1378574(lVar10,lVar11,0);
                Newtonsoft_Json_Linq_JObject__set_Item_15c6118
                          (lVar24,*(undefined8 *)PTR_DAT_057b97d0,lVar10,0);
              }
              Newtonsoft_Json_Linq_JArray__Add_13791f4(plVar7,lVar24,0);
              iVar21 = iVar21 + 1;
            } while (iVar21 < *(int *)(lVar9 + 0x18));
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)(lVar8 + 0x18));
      }
      lVar9 = *(long *)PTR_DAT_0581a568;
      lVar8 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0131942c();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0131942c();
      }
      (**(code **)(*plVar7 + 0x2b8))
                (plVar7,param_5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)(*plVar7 + 0x2c0));
      return;
    }
  }
LAB_03056484:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

