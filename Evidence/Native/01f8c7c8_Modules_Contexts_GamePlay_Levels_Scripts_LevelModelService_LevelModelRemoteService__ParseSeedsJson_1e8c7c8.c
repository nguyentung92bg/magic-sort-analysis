/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelRemoteService$$ParseSeedsJson
System_Collections_Generic_List_string__o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService__ParseSeedsJson (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService_o* __this, System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01f8ca50) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelRemoteService$$ParseSeedsJson
   System_Collections_Generic_List_string__o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService__ParseSeedsJson
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService_o* __this,
   System_String_o* json, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService__ParseSeedsJson_1e8c7c8
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  
  puVar3 = PTR_DAT_05778c18;
  if ((bRam0000000005c2810d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_05772360);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    FUN_012d0dc8(PTR_DAT_05801700);
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_05778c18);
    bRam0000000005c2810d = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar6 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_05766950);
    lVar7 = Newtonsoft_Json_Linq_JArray__Parse_13788e0(param_2,0);
    puVar3 = PTR_DAT_058165e8;
    if (lVar7 != 0) {
      plVar8 = (long *)Newtonsoft_Json_Linq_JArray__GetEnumerator_137915c(lVar7,0);
      puVar5 = PTR_DAT_05801700;
      puVar4 = PTR_DAT_057a12b8;
      puVar2 = PTR_DAT_05772360;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      do {
        lVar7 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_01f8c8ec;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar4,0);
LAB_01f8c8ec:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return lVar6;
          }
          lVar7 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar12 == 0) goto LAB_01f8c9fc;
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_01f8c9e4;
        }
        lVar7 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_01f8c948;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,0);
LAB_01f8c948:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar13 = *(long *)puVar5;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar6);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_01f8c9e4:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_01f8ca18;
    }
  }
LAB_01f8c9fc:
  puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar3,0);
LAB_01f8ca18:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return lVar6;
}

