/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnInitialize_2751ed0(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar5 = PTR_DAT_057d9cb8;
  if ((bRam0000000005c2c701 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057732a8);
    FUN_012d0dc8(PTR_DAT_057a3cf0);
    FUN_012d0dc8(PTR_DAT_057d9cb8);
    bRam0000000005c2c701 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_057a3cf0);
  *(long *)(param_1 + 0x90) = lVar6;
  FUN_012d0d74((long *)(param_1 + 0x90),lVar6);
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_057732a8;
    bVar2 = *(byte *)(lVar6 + 300);
    if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x48) = plVar7;
      if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6))
      goto code_r0x012d0d74;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar7,lVar6);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
code_r0x012d0d74:
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

