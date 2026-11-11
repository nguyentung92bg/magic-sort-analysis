/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$.ctor
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches___ctor (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$.ctor
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches___ctor
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches___ctor_1e8a620
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_057728f8;
                    /* try { // try from 01f8a624 to 0208a6a3 has its CatchHandler @ 01f8a3b8 */
  if ((bRam0000000005c280fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ee7a8);
    FUN_012d0dc8(PTR_DAT_057728f8);
    bRam0000000005c280fa = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057ee7a8);
    plVar6 = (long *)(param_1 + 0x10);
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
                    /* try { // try from 01f8a6a4 to 0208a6a7 has its CatchHandler @ 01f8a6c8 */
  FUN_012d0ef0();
}

