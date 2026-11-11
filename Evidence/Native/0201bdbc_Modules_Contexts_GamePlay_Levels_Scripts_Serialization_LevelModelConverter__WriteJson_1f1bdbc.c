/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelConverter$$WriteJson
void Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter__WriteJson (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelConverter$$WriteJson
   void Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter__WriteJson
   (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter_o* __this,
   Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o*
   serializer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelConverter__WriteJson_1f1bdbc
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  if ((bRam0000000005c28657 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a568);
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_057eb888);
    FUN_012d0dc8(PTR_DAT_0580c540);
    FUN_012d0dc8(PTR_DAT_057c77a0);
    FUN_012d0dc8(PTR_DAT_0578b728);
    FUN_012d0dc8(PTR_DAT_05783ca8);
    bRam0000000005c28657 = 1;
  }
  puVar2 = PTR_DAT_0581aec8;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057eb888 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057eb888))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_3);
    }
    uVar8 = Newtonsoft_Json_Linq_JArray__FromObject_1378af0(param_3[5],param_4,0);
    uVar9 = Newtonsoft_Json_Linq_JArray__FromObject_1378af0(param_3[6],param_4,0);
    plVar10 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar7 = PTR_DAT_0581a568;
    puVar6 = PTR_DAT_0580c540;
    puVar5 = PTR_DAT_057c77a0;
    puVar4 = PTR_DAT_0578b728;
    puVar3 = PTR_DAT_05783ca8;
    puVar2 = PTR_DAT_0577c730;
    if (plVar10 != (long *)0x0) {
      Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(plVar10,0);
      lVar12 = param_3[2];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar11 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c((int)lVar12,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar4,uVar11,0);
      uVar11 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d3c60(param_3[4],0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar6,uVar11,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar5,uVar8,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar3,uVar9,0);
      lVar13 = *(long *)puVar7;
      lVar12 = **(long **)(lVar13 + 0x38);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_0131942c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar12 = **(long **)(lVar13 + 0x38);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_0131942c();
      }
                    /* WARNING: Could not recover jumptable at 0x0201bff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x2b8))
                (plVar10,param_2,**(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)(*plVar10 + 0x2c0))
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

