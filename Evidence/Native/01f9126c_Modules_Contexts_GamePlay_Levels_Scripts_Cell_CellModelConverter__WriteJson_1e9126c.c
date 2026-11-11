/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.CellModelConverter$$WriteJson
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter__WriteJson (Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.CellModelConverter$$WriteJson
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter__WriteJson
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter_o* __this,
   Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o*
   serializer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter__WriteJson_1e9126c
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000005c28134 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a568);
    FUN_012d0dc8(PTR_DAT_058148a0);
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_05805c10);
    FUN_012d0dc8(PTR_DAT_0576a538);
    FUN_012d0dc8(PTR_DAT_0575ed20);
    FUN_012d0dc8(PTR_DAT_05796fd8);
    bRam0000000005c28134 = 1;
  }
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_058148a0 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_058148a0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_3);
    }
  }
  plVar5 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0581aec8);
  if ((plVar5 != (long *)0x0) &&
     (Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(plVar5,0), puVar3 = PTR_DAT_0577c730,
     puVar2 = PTR_DAT_0576a538, param_3 != (long *)0x0)) {
    lStack_50 = param_3[2];
    uStack_48 = (undefined4)param_3[3];
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05805c10,&lStack_50);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar6,param_4,0);
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar5,*(undefined8 *)puVar2,uVar6,0);
    puVar2 = PTR_DAT_05796fd8;
    lVar8 = param_3[4];
    if (lVar8 != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar8,param_4,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar5,*(undefined8 *)puVar2,uVar6,0);
    }
    puVar4 = PTR_DAT_0581a568;
    puVar2 = PTR_DAT_0575ed20;
    lVar8 = param_3[5];
    if (lVar8 != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar8,param_4,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar5,*(undefined8 *)puVar2,uVar6,0);
    }
    lVar7 = *(long *)puVar4;
    lVar8 = **(long **)(lVar7 + 0x38);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_0131942c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar8 = **(long **)(lVar7 + 0x38);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_0131942c();
    }
    (**(code **)(*plVar5 + 0x2b8))
              (plVar5,param_2,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)(*plVar5 + 0x2c0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

