/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.EditorAItemView$$Awake
void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView__Awake (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.EditorAItemView$$Awake
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView__Awake
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView__Awake_23079f0
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_05784328;
                    /* try { // try from 02407a0c to 02507a13 has its CatchHandler @ 02407ac0 */
  if ((bRam0000000005c2a657 & 1) == 0) {
                    /* try { // try from 02407a14 to 02507a93 has its CatchHandler @ 024077a0 */
    FUN_012d0dc8(PTR_DAT_05784328);
    bRam0000000005c2a657 = 1;
  }
  uVar5 = UnityEngine_Component__get_transform_408b444(param_1,0);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar6 != 0) {
    Modules_Contexts_GamePlay_Board_Common_Scripts_BasicTransform___ctor_2f60e0c(lVar6,uVar5,0);
    plVar7 = (long *)(param_1 + 0x18);
    *plVar7 = lVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

