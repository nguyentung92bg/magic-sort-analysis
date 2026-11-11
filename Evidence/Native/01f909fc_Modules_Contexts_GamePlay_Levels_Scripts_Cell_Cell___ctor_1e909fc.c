/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$.ctor
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell___ctor (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, UnityEngine_Vector3_o localPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$.ctor
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell___ctor
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, UnityEngine_Vector3_o
   localPosition, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell___ctor_1e909fc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_057e11f8;
  if ((bRam0000000005c2812d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05764cd8);
    FUN_012d0dc8(PTR_DAT_057e11f8);
    bRam0000000005c2812d = 1;
  }
  System_Object___ctor_23dfe5c(param_4,0);
  *(undefined4 *)(param_4 + 0x10) = param_1;
  *(undefined4 *)(param_4 + 0x14) = param_2;
  *(undefined4 *)(param_4 + 0x18) = param_3;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_05764cd8);
    plVar6 = (long *)(param_4 + 0x38);
    *plVar6 = lVar5;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

