/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$ResetFailed
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__ResetFailed (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$ResetFailed
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__ResetFailed
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__ResetFailed_1e8a6a8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
                    /* try { // try from 01f8a6a8 to 0208a6ab has its CatchHandler @ 01f8a6c4 */
                    /* try { // try from 01f8a6ac to 0208a6af has its CatchHandler @ 01f8a6c8 */
                    /* try { // try from 01f8a6b0 to 0208a6b3 has its CatchHandler @ 01f8a3b8 */
                    /* try { // try from 01f8a6b4 to 0208a6b7 has its CatchHandler @ 01f8a6c0 */
                    /* try { // try from 01f8a6b8 to 0208a6f3 has its CatchHandler @ 01f8a3b8 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a6b4 with catch @ 01f8a6c0
                        */
  if ((bRam0000000005c280fb & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a6a8 with catch @ 01f8a6c4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a6a4 with catch @ 01f8a6c8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a6ac with catch @ 01f8a6c8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a5bc with catch @ 01f8a6cc
                        */
    FUN_012d0dc8(PTR_DAT_05787018);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a61c with catch @ 01f8a6d0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a4dc with catch @ 01f8a6d4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01f8a51c with catch @ 01f8a6d8
                        */
    FUN_012d0dc8(PTR_DAT_0579ee68);
    FUN_012d0dc8(PTR_DAT_057e6ca0);
    FUN_012d0dc8(PTR_DAT_05789310);
                    /* try { // try from 01f8a6f4 to 0208a6f7 has its CatchHandler @ 01f8a770 */
    bRam0000000005c280fb = 1;
  }
  puVar2 = PTR_DAT_0579ee68;
  puVar1 = PTR_DAT_05787018;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_05789310);
                    /* try { // try from 01f8a734 to 0208a75b has its CatchHandler @ 01f8a77c */
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined1 *)(lStack_28 + 0x1a) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar1);
  }
                    /* try { // try from 01f8a75c to 0208a767 has its CatchHandler @ 01f8a3b8 */
                    /* try { // try from 01f8a768 to 0208a76f has its CatchHandler @ 01f8a77c */
  return;
}

