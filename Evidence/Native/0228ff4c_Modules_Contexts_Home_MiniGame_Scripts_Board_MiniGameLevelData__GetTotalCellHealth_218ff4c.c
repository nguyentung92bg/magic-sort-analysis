/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameLevelData$$GetTotalCellHealth
int32_t Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData__GetTotalCellHealth (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameLevelData$$GetTotalCellHealth
   int32_t Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData__GetTotalCellHealth
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData__GetTotalCellHealth_218ff4c
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c29d95 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057832b8);
    FUN_012d0dc8(PTR_DAT_05808000);
    FUN_012d0dc8(PTR_DAT_0579a920);
    FUN_012d0dc8(PTR_DAT_0578b160);
    bRam0000000005c29d95 = 1;
  }
  puVar2 = PTR_DAT_05808000;
  puVar1 = PTR_DAT_057832b8;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0578b160);
  while( true ) {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_38,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar1);
      return iVar4;
    }
    if (lStack_28 == 0) break;
                    /* try { // try from 0228fff8 to 0239010f has its CatchHandler @ 02290210 */
    if (*(int *)(lStack_28 + 0x10) - 0xfU < 3) {
      iVar4 = iVar4 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

